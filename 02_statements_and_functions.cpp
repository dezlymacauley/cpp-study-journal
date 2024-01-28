// NOTE: What is a statement?

/*
 
A stasteme is a basic unit of computation in a C++ program.
Every C++ program is a collection of statements organized in a certain way,
to achieve some goal.
Statements end with a semicolon in C++(;)

A statement performs a specific action. 

 */

#include <iostream>

// NOTE: Why the "main" function in C++ is an int type

/* 

It is an int type because the main function, upon its completion,
it will send an exit code to the operating system. 

This exit code is an integer.

E.g. return 0; 

An exit code of zero means that the progrogram was successfull. 
Any other numbers will indicate that the program encountered an error,
during its runtime.

*/ 

int main() {
   

    int first_number = 3;
    int second_number = 7;

    // NOTE: In C++ you can also use curly braces to declare a variable.
   
    // int first_number {3}; 
    // int second_number {7};

    std::cout << "The first number is " << first_number << std::endl;
    std::cout << "The second number is " << second_number << std::endl;

    int sum_first_second = first_number + second_number; 
    std::cout << "The sum of " << first_number << " and " << second_number << " is " << sum_first_second << std::endl;

    return 0;

}
