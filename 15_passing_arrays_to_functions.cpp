#include <iostream>
using std::cout;
using std::endl;

// NOTE: Step 1: Write the function protypes

// This is where you specifiy the name of the function,
// the arguements that the function requires to work, 
// and the value that the function returns.
// If the function does not return a value, then it must be marked with "void".


// This will print out all of the numbers in an array.
void print_array(int _array, size_t _number_of_vales_in_array);

// This will replace all of the values in an array with a replacement number.
void replace_numbers_in_array(
    int _array, 
    size_t _number_of_vales_in_array, 
    int _replacement_number
);

// NOTE: What is `size_t`?
/*
size_t is an unsigned integer type that is commonly used to represent sizes,
or indices of objects in memory.

It is often used as the type for variables that store the size of arrays,
the number of elements in a container, or the result of the sizeof operator.

*/




int main() {

    int my_scores[] {100,98,90,86,84};


    cout << endl;
    return 0;
}
