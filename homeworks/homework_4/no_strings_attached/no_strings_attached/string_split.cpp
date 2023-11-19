#include <no_strings_attached/string_split.h>

namespace no_strings_attached {
  std::vector<std::string> Split(const std::string& str, const std::string& delimiter) {
    std::size_t pos;
    std::string temp = str; 
    std::vector<std::string> processed_vector{};
    do { 
      pos = temp.find(delimiter);
      processed_vector.push_back(temp.substr(0,pos));
      temp = temp.substr(pos + delimiter.length());
    } while (pos != std::string::npos); 
    return processed_vector;
  } 

  std::vector<std::string> Split(const std::string& str, const std::string& delimiter, int number_of_chunks_to_keep) {
    std::vector<std::string> processed_vector{};
    processed_vector = Split(str, delimiter);
    processed_vector.resize(processed_vector.size() - number_of_chunks_to_keep + 1);
    return processed_vector;
  }

} // namespace no_strings_attached


