#pragma once

#include <nlohmann/json.hpp>

#include <boost/filesystem.hpp>

using json = nlohmann::json;

namespace nlohmann {
    template<>
    struct adl_serializer<boost::filesystem::path>
    {
        static void to_json(json& j, const boost::filesystem::path& path)
        {
            j = path.string();
        }

        static void from_json(const json& j, boost::filesystem::path& path)
        {
            path = j.get<std::string>();
        }
    };
}
