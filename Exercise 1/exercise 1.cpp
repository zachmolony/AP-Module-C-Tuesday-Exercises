#include <iostream> //tell the compiler to add refererences for the standard devices cin, cout, clog, cerr; http://www.cplusplus.com/reference/iostream/
#include "header.h" // header file for use in exercise 3
using namespace std; // 'std::' is now implied

// Exercise 1: ReverseWord

string reverse(string word, size_t wordSize) { // take the given word and the word size
  for (int i = 0; i < wordSize / 2; i++) { // iterate through half the characters
      swap(word[i], word[wordSize - i - 1]); // swap these chars with their corresponding char on the other side of the word
  }
  return word; // return the reversed string
}

int main() {
  string word;
  cout << "Please enter a word: ";
  cin >> word;
  cout << word << " spelt backwards is: " << reverse(word, word.length()) << endl;
  return 0;
}
