#include <iostream>

// NOTE: Declare any functions that the "main" function needs to use,
// above the "main" function
int addTwoNumbers(int _first_number, int _second_number) {

   int sum_first_second = _first_number + _second_number; 

    // NOTE: Don't forget to return the value!
    // `int addTwoNumbers` means that the return type must be an integer
    
    return sum_first_second;
}

// NOTE: The "main" function is the entry point into the program
int main() {
    
    std::cout << "The total is: " << addTwoNumbers(10,8) << std::endl;

    return 0; 
}
