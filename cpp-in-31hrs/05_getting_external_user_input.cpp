// This allow you to get user input, and print output messages
#include <iostream> 

// This allows you to use the variable type "string" in your program
#include <ostream>
#include <string>

int main() {
   
    // First declare variables that will collect the user input.
    std::string name; 
    int age;
   
    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    std::cout << "Your name is " << name 
        << " and your age is " << age << std::endl;
    // I simply put the line above on a new line for readability.
    // This does not affect your code in any way

    return 0;
}
