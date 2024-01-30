#include <iostream>
#include <cstring> // for c-style string functions
// #include <cctype> 
// for character-based functions
// The <cctype> header provides functions for working with characters, such as testing whether a character is a digit, a letter, etc.

using std::cout;
using std::cin;
using std::endl;

int main() {

    char first_name[20] {};

/*
This C++ code declares a character array named first_name, 
with a size of 20 elements and initializes it,
with an empty brace-enclosed initializer list.

*/

    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "------------------------------" << endl;

    cout << "Hello, " << first_name 
        << "your first name has" << strlen(first_name) << "characters"
        << endl;

    cout << "and your last name," << last_name << "has" << strlen(last_name)
        << "characters" << endl;

    strcpy(full_name, first_name); // first name is copied into full name
    strcat(full_name, " "); 
    // strcat adds a space is added after full name.
    strcat(full_name, last_name);
    cout << "Your full name is " << full_name << endl;

// strlen returns a variable type called size_t 
}
