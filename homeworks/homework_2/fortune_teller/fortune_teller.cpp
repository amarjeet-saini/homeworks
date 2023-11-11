#include <iostream>
#include <string>
#include <array>
#include <unordered_map>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::pair;

int main() {
  string name{}, season{};
  const std::unordered_map<string, string> nouns{pair{"spring", "STL guru"},
        pair{"summer","C++ expert"},pair{"autumn","coding beast"},pair{"winter", "sofware design hero"}};
  std::array<string, 2> adjectives;
  std::array end{"eats UB for breakfast", "finds errors quicker than the compiler", 
    "is not afraid of C++ error messages"};

  cout << "Welcome to the fortune teller program!" << endl;
  cout << "Please enter your name:" << endl; 
  cin >> name;
  cout << "Please enter the time of year when you were born:" << endl;
  cout << "(pick from 'spring', 'summer', 'autumn', 'winter')" << endl; 
  cin >> season;
  
  cout << "Please enter an adjective:" << endl;
  cin >> adjectives[0];
  cout << "Please enter another adjective:" << endl;
  cin >> adjectives[1];
  cout << "Here is your description:" << endl; 
  cout << name << ", the " << adjectives[name.size() % 2] << " " << nouns.at(season) << " that " << end[name.size() % 3] << endl;
  return 0;
}
