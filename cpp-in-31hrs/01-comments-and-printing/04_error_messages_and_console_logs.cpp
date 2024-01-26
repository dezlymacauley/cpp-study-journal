
// NOTE: Some of the other functionality of <iostream>

/*
   std::cout = Character out = print data to the console
   std::cin = Character in = Reading data from the terminal
   std:cerr = Standard Error Stream = Printing an error to the console
   std:clog = Printing a log message to the console
*/

#include <iostream>

int main() {

    // NOTE: How to write error messages in C++
    std::cerr << "Erorr: This code isn't sexy enough" << std::endl;

    // NOTE: What is the difference between `std::cerr` and `std::clog`
    std::clog << "Log Mesage: Calculating distance" << std::endl;
    /*

    The main difference between std::cerr and std::clog in C++ lies in their buffering behavior:

    1. std::cerr (standard error stream):
        std::cerr is often unbuffered, meaning that the output is immediately sent to the console without waiting for a buffer to be filled.
        This can be beneficial in situations where you want error messages to appear immediately, especially in the context of debugging or handling critical errors.

    2. std::clog (console log):
        std::clog is typically buffered, meaning that the output is collected in a buffer before being sent to the console.
        Buffering can be useful in scenarios where you want to collect multiple log messages in a buffer before displaying them, which can be more efficient in terms of I/O operations.

    */

    // NOTE: Use cases
    /*
        
    1. std::cerr:
        - Use when you want error messages to be displayed immediately.
        - Typically unbuffered, so the output is not delayed.
        - Suitable for situations where immediate visibility of error messages is crucial, such as debugging or handling critical errors.

    2. std::clog:
        - Use when you may want to collect and save the output of messages before displaying them.
        - Typically buffered, allowing for more efficient I/O operations by collecting multiple log messages in a buffer before displaying them.
        - Suitable for logging situations where you want to review the collected log information at a later time, such as in the case of troubleshooting or analyzing system behavior. 

    */


}
