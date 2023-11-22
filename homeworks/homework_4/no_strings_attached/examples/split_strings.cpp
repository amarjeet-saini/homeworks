#include<no_strings_attached/string_split.h>
#include<iostream>
#include<string>

using std::cout; 
using std::endl;

int main() {
    std::string input{}, delimiter{" "};
    cout << "Example program that splits strings."  << endl;
    cout << "Please enter a sting:" << endl;
    std::getline(std::cin, input);

    std::vector<std::string> split_strings = 
        no_strings_attached::Split(input, delimiter);

    cout << "Your split string: ";
    for (const auto& x: split_strings) cout << "'" << x << "'" << " ";
    std::cout << "\n";
    
    return 0;
}