# include <iostream>

using std::cout;
using std::endl;

//NOTE: If you want to know where you can find pre-written functions:
// https://en.cppreference.com/w/cpp/header/cstdlib


// NOTE: In C++ you can't define a function inside of another function
// If you declare a function it must be outside of main

// NOTE: This is a void function. It does not return anything
void sayHello() {
   cout << "Hello" << endl; 
}

// NOTE: This function actually returns a value
int addTwoNumbers(int _num1, int _num2) {
    return _num1 + _num2; 
}


int main() {
    
    // NOTE: This is how you call functions
    sayHello();
    cout << addTwoNumbers(2, 5) << endl; 

    int num1 {8};
    int num2 {9};
    int total {0};


    return 0;

}
