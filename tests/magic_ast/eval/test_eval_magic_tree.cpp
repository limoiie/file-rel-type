//
// Created by ligen on 12/2/2020.
//

#include <filesystem>
#include <fstream>
#include <numeric>

#include <gtest/gtest.h>
#include <tao/pegtl.hpp>

#include "magic_peg/magic_peg.h"
#include "magic_peg/magic_peg_action.hpp"
#include "magic_ast/eval/eval_magic_tree.h"

#include "../../domain_path.h"
#include "../../print_magic_tree.h"

namespace testing_internal
{
    using p_result_t = std::shared_ptr< eval_magic_tree::entry_result_t >;

    void print_results(std::vector< p_result_t > const &results) {
        auto const desc_chain =
                std::reduce(results.begin(), results.end(), std::string(),
                            [](auto const &acc, auto const &v) {
                                return acc + v->desc;
                            });
        auto const type_code_chain =
                std::reduce(results.begin(), results.end(), std::string(),
                            [](auto const &acc, auto const &v) {
                                return acc + std::to_string(v->type_code);
                            });
        logs::info("==> Matched!");
        logs::info("Match information: {}|{}", desc_chain, type_code_chain);
    }

    void test(std::filesystem::path const &rule_path, std::filesystem::path const &doc_path) {
        tao::pegtl::file_input in(rule_path.u8string());
        auto st = magic::peg::action::state_magic_build();
        tao::pegtl::parse< contrib::exact< magic_file >, magic::peg::action::action_magic >(in, st);

        logs::info("magic trees: {}", st.magic_trees.size());
        for (auto i = 0u; i < st.magic_trees.size(); ++i) {
            auto &tree = st.magic_trees[i];
            logs::trace("");
            logs::trace("Tree {}:", i);
            print_tree_node(tree);

            std::ifstream fs(doc_path, std::ios_base::binary);
            auto eval = eval_magic_tree(fs);
            if (eval.eval(tree)) {
                testing_internal::print_results(eval.result_chain());
                break;
            }
        }
    }
}

TEST(TestEvalMagicTree, test_eval_magic_tree_pdf) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;

    auto const doc_path = test_resource_path() / "pdf" / "A.pdf";
    auto const rule_path = test_resource_path() / "magic" / "pdf";

    testing_internal::test(rule_path, doc_path);
}

TEST(TestEvalMagicTree, test_eval_magic_tree_doc) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;

    auto const doc_path = test_resource_path() / "office" / "doc" / "A.doc";
    auto const rule_path = test_resource_path() / "magic" / "msdos";

    testing_internal::test(rule_path, doc_path);
}

TEST(TestEvalMagicTree, test_eval_magic_tree_pic) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;

    logs::logger->set_level(spdlog::level::info);

    auto docs = std::vector< std::filesystem::path >{
            test_resource_path() / "picture" / "A.png",
            test_resource_path() / "picture" / "B.png",
            test_resource_path() / "picture" / "A.jpg",
            test_resource_path() / "picture" / "B.jpg",
            test_resource_path() / "picture" / "A.jpeg",
            test_resource_path() / "picture" / "B.jpeg"
    };

    for (auto const& doc_path : docs) {
        logs::info("Testing {}...", doc_path.u8string());

        auto const rule_path = test_resource_path() / "magic" / "images";
        testing_internal::test(rule_path, doc_path);
    }
}
