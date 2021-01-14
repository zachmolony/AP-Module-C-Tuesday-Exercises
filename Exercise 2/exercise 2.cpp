#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
#include "../header.h"
using namespace std; // 'std::' is now implied

// Exercise 2: Lowercase Converter

string convertToLower(string word, size_t wordSize) { // take the given word and the word size
  for (int i = 0; i < wordSize; i++) { // iterate through all characters
      word[i] = tolower(word[i]); // convert each of these chars to lowercase
  }
  return word; // return the lowercase string
}

int ex2() {
  string word;
  cout << "Please enter a word: ";
  cin >> word;
  cout << word << " converted to lowercase is: " << convertToLower(word, word.length()) << endl;
  return 0;
}
