#pragma once

#include <vector>
#include <string>

namespace no_strings_attached {
    /*
        split a given string into a vector of strings from the right given a delimiter
        eg: Split("hello world", " ") ➡️ std::vector{"hello", "world"}
    */
    std::vector<std::string> Split(const std::string& str, const std::string& delimiter);

    /*
    overload Split function so only right part is kept
    */
    std::vector<std::string> Split(const std::string& str, const std::string& delimiter, int number_of_chunks_to_keep);
} // namespace no_strings_attached

