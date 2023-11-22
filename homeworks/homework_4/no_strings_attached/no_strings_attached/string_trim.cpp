#include <no_strings_attached/string_trim.h>

namespace no_strings_attached { 
    
  std::size_t FrontPos(const std::string& str, char char_to_trim) {
    std::size_t str_len = str.length(), idx = 0;
    for (idx = 0; idx < str_len; idx++) if (str[idx] != char_to_trim) break;
    return idx; 
  }
  
  std::size_t BackPos(const std::string& str, char char_to_trim) {
    int idx = str.length() - 1;
    for (; idx >= 0; idx--) if (str[idx] != char_to_trim) break;
    return idx; 
  }
  
  std::string Trim(const std::string& str, char char_to_trim, Side side) {
    if(side == Side::kLeft) {
      std::size_t i = FrontPos(str, char_to_trim);
      return str.substr(i);
    }
    else if (side == Side::kRight) {
      std::size_t i = BackPos(str, char_to_trim);
      return str.substr(0, i+1); 
    }
    else if (side == Side::kBoth) { 
      std::size_t i = FrontPos(str, char_to_trim);
      std::size_t j = BackPos(str, char_to_trim);
      return str.substr(i, j-i+1);
    }
    else {
      std::cerr << "Invalid side given" << std::endl;
      return "-1"; 
    }
  }
      
  std::string Trim(const std::string& str) {
    return Trim(str,' ',Side::kBoth);
  }

} // namespace no_strings_attached

