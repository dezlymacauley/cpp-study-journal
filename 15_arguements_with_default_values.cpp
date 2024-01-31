// NOTE: How to create arguements with default values
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip> // This will help with formating of output when using cout.
// Add this to the main function cout << fixed << setprecision(2);
using std::fixed;
using std::setprecision;


// NOTE: You need a seperate line to add the default values.

// This is actually a function prototype.
// If someone tries to use a function,
// without giving a value for the _tax_rate or the _shipping_charge, 
// the function will return the default values

// NOTE: Please pay attention to the semicolon at the end!

// Function prototypes end with a semicolon, 
// and do not have the curly brackets.

double CalcTotalCost(
    double _base_cost, 
    double _tax_rate = 0.06, 
    double _shipping_charge = 3.50);

double CalcTotalCost(
    double _base_cost, 
    double _tax_rate, 
    double _shipping_charge) {
    return _base_cost += (_base_cost * _tax_rate) + _shipping_charge;
}

int main() {

    // When an ouptut is printed, only 2 decimals will be shown
    cout << fixed << setprecision(2); 
    double total_cost {0.0};
    
    // default values for _tax_rate, and _shipping_charge will be used.
    cout << CalcTotalCost(200) << endl; 

    // default values for _shipping_charge will be used.
    cout << CalcTotalCost(100,0.08) << endl; 
}
