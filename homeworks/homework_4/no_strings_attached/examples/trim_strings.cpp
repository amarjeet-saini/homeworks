#include<no_strings_attached/string_trim.h>
#include<iostream>
#include<string>

using std::cout; 
using std::endl;

int main() {
    std::string input{};
    cout << "Example program that trims strings."  << endl;
    cout << "Please enter a string:" << endl;
    std::getline(std::cin, input);
    cout << "Your trimmed string: ";
    std::string trim_strings = no_strings_attached::Trim(input);
    cout << "'" << trim_strings << "'" << endl;
    return 0;
}