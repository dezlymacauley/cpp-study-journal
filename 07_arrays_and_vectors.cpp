#include <iostream>

// Add both of these to use vectors.
#include <vector> // Enable the functionality
using std::vector; 
// Makes the syntax cleaner so you can use it like:
// `vector <int> test_scores`, 
// rather than having to keep typing `std::vector <int> test_scores`

using std::cout;
using std::endl;

// NOTE: 📦 Arrays (Fixed Size)

/*
Compound data type or data structure
All elements in the array must be of the same variable type. 
Arrays are fixed in size.
E.g. If you create an array that can hold up to 100 numbers, that is the limit.

The first element is at index 0
The last element is at index (size - 1)
*/

// NOTE: In C++ there are NO bound checks on arrays! So be careful!
// What's a bound check? This is when a program checks,
// if you are out of bounds when using an array.
// E.g. You have and array of 10 numbers. (Index 0 to 9)
// Bound error can happen is you try to access the 11th number when there,
// is no 11th number!

int main(){

// `the variable type of the elements` `name of array` `number of values`
int high_scores_per_level [5] {100, 20, 30, 40, 10};

// NOTE: If you only initialize two numbers, the rest of the arrary will be 0
int high_scores_per_level2 [5] {91, 12};


// NOTE: If you only initialize all values in the array with a default value. 
int enemies_defeated [5] {0}; 

// NOTE: With this method, the compiler will automatically set,
// the size of the array to 4 because it contains 4 elements, 
// however this will be the fixed length of the array
int mysterious_array [4] {12, 15, 9}; 

    cout << high_scores_per_level2[1] << endl; // This will print `12`
    high_scores_per_level2[1] = 15;
    cout << high_scores_per_level2[1] << endl; // This will print `15`

//=============================================================================
// NOTE: 📦 Vectors (Fixed Size)
// In order to use a vector, you need to add two lines to the top of your file,
// before the main function:
// `#include <vector>` 
// `using std::vector` to make the syntax cleaner.


/*
Vectors are like arrays except they are dynamic.
Vectors do not have a fixed size. 

Vectors are what you want to use in modern C++
Vectors can provide bounds checking.
Vectors can use lots of useful functions like sort, reverse, find, and more.
*/

    // vector <char> vowels (5);
    // vector <int> test_scores (10);


}
