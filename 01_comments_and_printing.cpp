#include <iostream>

/******************************************************************************

NOTE:  

******************************************************************************/



/* 
NOTE: importing functionality
<iostream> stands for "Input Output Stream"

The line above tells the compiler that you want to access the functionality,
of iostream. iostream allows you to perform input and output operations,
in you C++ program.

*/

// This is a single line comment

int main() {
    // NOTE: This will print "DezlyMacauley" in one line.
    std::cout << "Dezly";
    std::cout << "Macauley" << std::endl; // std::endl means that after Macauley is printed,
    // the text output after that should go on a new line
    // E.g. Cassie will apear on the next line 

    // NOTE: This will print each one on a new line
    // E.g.     Dezly
    //          Macauley
    std::cout << "Cassie" << std::endl;
    std::cout << "Lockheart" << std::endl;
    
    // NOTE: Including <isostream> is what allows you to use `std::cout`,
    // and `std::endl`
    
    
    // `std::cout` means that cout is part of the C++ Standard library
    // `cout means` means Character output
    // `std::endl` means End line. 
    // endl is an object in the C++ Standard library that represents,
    // a newline character ('\n')
    // Think of it as pressing the Enter key after printing the message.
    
    return 0; // This is to let the Operating System know that the programm compiled successfully.

}
