//
// Created by ligen on 11/21/2020.
//

#include <gtest/gtest.h>

#include <tao/pegtl.hpp>

#include <magic_peg/magic_peg_action.hpp>

#include "../print_magic_tree.h"

TEST(TestMagicPeg, test_file_builder_only_matching) { // NOLINT(cert-err58-cpp)
    std::cout << "Testing" << __FUNCTION__ << " ..." << std::endl;
    auto cases = std::list< std::pair< std::string, bool > >{
            {
                    "0\tstring\t\\x8bBACKUP\\x20\n"
                    "# actually 128 nul bytes\n"
                    ">0xa\tstring\t\\0\\0\\0\\0\\0\\0\\0\\0\n"
                    ">>0x9\tubyte\tx\tDOS 3.3 backup control file, sequence %d|3163\n"
                    ">>0x8a\tubyte\t0xff\t\\b, last disk",
                    true
            },
            {
                    "0\tstring\t\tMM\\x00\\x2a\tTIFF image data, big-endian|2414\n"
                    "!:strength +70\n"
                    "!:mime\timage/tiff\n"
                    ">(4.L)\tuse\t\t\\^tiff_ifd\n"
                    "0\tstring\t\tII\\x2a\\x00\tTIFF image data, little-endian|2415\n"
                    "!:mime\timage/tiff\n"
                    "!:strength +70\n"
                    ">(4.l)\tuse\t\ttiff_ifd",
                    true
            },
            {
                    "#--------------------------------------------\n"
                    "# $File$\n"
                    "# adi: file(1) magic for ADi's objects\n"
                    "# From Gregory McGarry <g.mcgarry@ieee.org>\n"
                    "#\n"
                    "0\tleshort\t\t0x521c\t\tCOFF DSP21k|28\n"
                    ">18\tlelong\t\t&02\t\texecutable,|29\n"
                    ">18\tlelong\t\t^02\n"
                    ">>18\tlelong\t\t&01\t\tstatic object,|30\n"
                    ">>18\tlelong\t\t^01\t\trelocatable object,|31\n"
                    ">18\tlelong\t\t&010\t\tstripped\n"
                    ">18\tlelong\t\t^010\t\tnot stripped",
                    true
            },
            {
                    "# added by Joerg Jenderek of http://www.freedos.org/software/?prog=kc\n"
                    "# and http://www.freedos.org/software/?prog=kpdos\n"
                    "# for FreeDOS files like KEYBOARD.SYS, KEYBRD2.SYS, KEYBRD3.SYS, *.KBD\n"
                    "0\tstring/b\tKCF\t\tFreeDOS KEYBoard Layout collection|3031\n"
                    "# only version=0x100 found\n"
                    ">3\tuleshort\tx\t\t\\b, version 0x%x|3031\n"
                    "# length of string containing author,info and special characters\n"
                    ">6\tubyte\t\t>0\n"
                    "#>>6\tpstring\t\tx\t\t\\b, name=%s\n"
                    ">>7\tstring\t\t>\\0\t\t\\b, author=%-.14s\n"
                    ">>7\tsearch/254\t\\xff\t\t\\b, info=\n"
                    "#>>>&0\tstring\t\tx\t\t\\b%-s\n"
                    ">>>&0\tstring\t\tx\t\t\\b%-.15s\n"
                    "# for FreeDOS *.KL files\n"
                    "0\tstring/b\tKLF\t\tFreeDOS KEYBoard Layout file|3032\n"
                    "# only version=0x100 or 0x101 found\n"
                    ">3\tuleshort\tx\t\t\\b, version 0x%x|3032\n"
                    "# stringlength\n"
                    ">5\tubyte\t\t>0\n"
                    ">>8\tstring\t\tx\t\t\\b, name=%-.2s\n"
                    "0\tstring\t\\xffKEYB\\ \\ \\ \\0\\0\\0\\0\n"
                    ">12\tstring\t\\0\\0\\0\\0`\\004\\360\tMS-DOS KEYBoard Layout file|3033",
                    true
            },
            {
                    "#----\n"
                    "\n"
                    "\n"
                    " ",
                    true
            },
            {
                    "#----\n"
                    "0\tleshort\t\t0x521c\t\tCOFF DSP21k|28\n"
                    "!2345678901234567890123456789012",
                    true
            },
            {
                    "#--------------------------------------------\n"
                    "# $File$\n"
                    "# adi: file(1) magic for ADi's objects\n"
                    "# From Gregory McGarry <g.mcgarry@ieee.org>\n"
                    "#\n"
                    "0\tleshort\t\t0x521c\t\tCOFF DSP21k|28\n"
                    ">18\tlelong\t\t&02\t\texecutable,|29\n"
                    ">18\tlelong\t\t^02\n"
                    ">>18\tlelong\t\t&01\t\tstatic object,|30\n"
                    ">>18\tlelong\t\t^01\t\trelocatable object,|31\n"
                    ">18\tlelong\t\t&010\t\tstripped\n"
                    ">18\tlelong\t\t^010\t\tnot stripped\n"
                    "#----",
                    true
            },
    };

    for (auto const &pair : cases) {
        std::cout << "  Case: " << std::endl << pair.first << std::endl;

        memory_input in(pair.first, __FUNCTION__);
        auto st = magic::peg::action::state_magic_build();
        auto out = parse< contrib::exact< magic_file > >(in);

        for (auto &tree : st.magic_trees) {
            print_tree_node(tree);
        }

        ASSERT_EQ(out, pair.second);
    }
}