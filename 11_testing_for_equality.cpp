/*
NOTE: In C++ true is represented by 1
And false is represented by 0

*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

using std::boolalpha; // Booleans will be displayed as true and false 
using std::noboolalpha; // Booleans will be displayed 1 for true, 0 for false

int main() {

    int num1 {0};
    int num2 {0};


    // Set std::boolalpha to display boolean values as "true" or "false"
    cout << boolalpha;

    cout << "Enter two numbers seperated by a space: " << endl;
    cin >> num1 >> num2;
    cout << num1 << " will be compared to " << num2 << endl;

    bool equal_result {false}; 
    bool not_equal_result {false}; 

    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);

    // NOTE: Comparision signs
    // == this means equal
    // != this means not equal

    cout << "Comparison result (equals):" << equal_result << endl; 
    cout << "Comparison result (not equals):" << not_equal_result << endl; 


    // Reset std::boolalpha to display boolean values as 1 or 0
    // This is the default behavior. 
    cout << noboolalpha;

    // NOTE: This would make more sense when used with if statements.

}



