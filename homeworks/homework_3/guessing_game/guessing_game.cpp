#include <random>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
  std::random_device r;
  std::default_random_engine e1(r());
  int min_val{}, max_val{}, guess_num{}, count{};

  cout << "Welcome to the GUESSING GAME!" << endl;
  cout << "I will generate a number and you will guess it!" << endl;
  cout << "Please provide the smallest number:" << endl;
  cin >> min_val;
  cout << "Please provide the largest number:" << endl;
  cin >> max_val;
  
  std::uniform_int_distribution<int> uniform_dist(min_val, max_val);
  int actual_num = uniform_dist(e1);
  cout << "I've generated a number. Try to guess it!" << endl;

  while(1) {
    cout << "Please provide the next guess: ";
    cin >> guess_num;
    count++;
    if (guess_num == actual_num) break;
    else if (guess_num > actual_num) cout << "Your number is too big. Try again!" << endl;
    else cout << "Your number is too small. Try again!" << endl;
  }

  cout << "You've done it! You guessed the number " << guess_num << " in " << count << " guesses!" << endl;
  return 0;
}
