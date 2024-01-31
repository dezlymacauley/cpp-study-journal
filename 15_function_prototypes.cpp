#include <iostream>

using std::cout;
using std::endl;


/*
NOTE: How to use function prototypes
You simply need a line with the name of the function, 
and the parameters that it expects.

*/

// This is what a function prototype looks like.
// The actual function is after the main function
double AverageOfThree(double _num1, double _num2, double _num3);

int main() {

    // The function is being used here.
    cout << AverageOfThree(25.4, 60.6, 56.21) << endl;
    return 0;
}

// In order to use this function you must make C++ aware of it, 
// since this function appears after the main function.
// This is done by using a function prototype
double AverageOfThree(double _num1, double _num2, double _num3) {
   return (_num1 + _num2 + _num3) / 3; 
}
