#pragma once

#include <string>
#include <iostream>

namespace no_strings_attached {
    enum class Side {kLeft, kRight, kBoth};
    
    /*
        function that allows trimming strings from a given direction
    */
    std::string Trim(const std::string& str, char char_to_trim, Side side);

    /*
        overload of Trim function that allows trimming spaces from both sides
    */
    std::string Trim(const std::string& str);
} // namespace no_strings_attached 