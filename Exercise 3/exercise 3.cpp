#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
#include "../header.h" // import functions from ex 2 & 3
using namespace std; // 'std::' is now implied

// Exercise 3: Palindrome Checker

int main() {
  string word;
  cout << "Please enter a word: ";
  cin >> word;
  string lowercase = convertToLower(word, word.length());
  string reversed = reverse(lowercase, word.length());
  cout << word << " is " << ((reversed == lowercase) ? "" : "not ") << "a palindrome.\n";
  return 0;
}
