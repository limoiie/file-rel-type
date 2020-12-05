//
// Created by ligen on 12/5/2020.
//

#ifndef FILE_REL_TYPE_SRC_UTILS_LOG_H_
#define FILE_REL_TYPE_SRC_UTILS_LOG_H_

#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/stdout_sinks.h>

namespace logs
{
    static constexpr auto default_logger_name = "console";
    [[maybe_unused]] static auto logger = []() {
        if (spdlog::get(default_logger_name) == nullptr) {
            auto logger = spdlog::stdout_logger_mt(default_logger_name);
            logger->set_level(spdlog::level::level_enum::trace);
        }
        return spdlog::get(default_logger_name);
    }();

    template< class... Ps >
    void trace(char const *t, Ps &&... ps) {
        spdlog::get(default_logger_name)->trace(t, std::forward< Ps >(ps)...);
    }

    template< class... Ps >
    void debug(char const *t, Ps &&... ps) {
        spdlog::get(default_logger_name)->debug(t, std::forward< Ps >(ps)...);
    }

    template< class... Ps >
    void info(char const *t, Ps &&... ps) {
        spdlog::get(default_logger_name)->info(t, std::forward< Ps >(ps)...);
    }

    template< class... Ps >
    void warn(char const *t, Ps &&... ps) {
        spdlog::get(default_logger_name)->warn(t, std::forward< Ps >(ps)...);
    }

    template< class... Ps >
    void error(char const *t, Ps &&... ps) {
        spdlog::get(default_logger_name)->error(t, std::forward< Ps >(ps)...);
    }

    template< class... Ps >
    void critical(char const *t, Ps &&... ps) {
        spdlog::get(default_logger_name)->critical(t, std::forward< Ps >(ps)...);
    }
}

#endif //FILE_REL_TYPE_SRC_UTILS_LOG_H_
