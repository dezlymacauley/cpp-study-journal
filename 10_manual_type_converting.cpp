#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int total {0};
    int num1 {0}, num2 {0}, num3 {0};

    cout << num1 << " " << num2 << " " << num3 << endl;

    const int planes_available {3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    // Calculating the average of the three numbers
    double average_cost {0.0};

    // NOTE: This is very important!
    // static_cast<double>(total) is used to convert the value of total,
    // which is an int, to a double. That way when division is performed on it,
    // it will return and accurate value.
    average_cost = static_cast<double>(total) / planes_available;

    cout << "The 3 numbers were: " << num1 << " " << num2 << " " 
        << num3 << endl;

    cout << "The total cost is: " << total << endl;
    cout << "The average cost is: " << average_cost << endl;

    return 0;

}
