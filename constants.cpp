#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {

    const float PRICE_PER_ROOM {30.0};
    const float SALES_TAX_PERCENTAGE = {0.06}; // 6% Sales tax
    const int DAYS_ESTIMATE_IS_VALID = {30};

    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "=================================================" << endl;
    cout << "How many rooms would you like cleaned? ";
    
    // Creating a varaible to store the user input
    int number_of_rooms {0};
    cin >> number_of_rooms; 

    cout << endl; // This will add an empty line

    // Get the number of rooms and display the price to the user
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << PRICE_PER_ROOM << endl;
    
    // Calculate and display cost (excluding tax)
    float cost_excluding_tax {number_of_rooms * PRICE_PER_ROOM};
    cout << "Cost(Excluding tax): $" << cost_excluding_tax << endl;
   
    // Calculate the tax amount, and display it
    float tax_amount =  cost_excluding_tax * SALES_TAX_PERCENTAGE;
    cout << "Tax: $" << tax_amount << endl;
    cout << "=================================================" << endl;
    cout << "Total cost: $" << cost_excluding_tax + tax_amount << endl;
    cout << "This estimate is valid for " 
        << DAYS_ESTIMATE_IS_VALID << " days" << endl;

    return 0;
}
