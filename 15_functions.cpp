#include <iostream>

using std::cout;
using std::endl;

// NOTE: In C++ you can't define a function inside of another function
// If you declare a function it must be outside of main

// NOTE: This is a void function. It does not return anything
void sayHello() {
   cout << "Hello" << endl; 
}

int main() {

    sayHello(); 
    int num1 {8};
    int num2 {9};
    int total {0};


    return 0;

}
