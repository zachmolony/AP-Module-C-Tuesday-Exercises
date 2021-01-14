#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
#include "header.h"
using namespace std; // 'std::' is now implied

// Exercise 3: Palindrome Checker

int main() {
  string word;
  cout << "Please enter a word: ";
  cin >> word;
  cout << word << " converted to lowercase is: " << reverse(word, word.length()) << endl;
  return 0;
}
