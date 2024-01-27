#include <iostream>

int main(int argc, char **argv) 
{
    int d = 2;
    std::cout << "Welcome to a program with a bug!\n";

    std::cin >> d;

    std::cout << "You gave me: " << d;
    return 0;
}

