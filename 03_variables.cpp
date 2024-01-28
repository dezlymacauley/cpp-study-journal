#include <string>
using std::string;

// This is a global variable. It can be accessed from any part of the program.
int villain_id;

// Types of variables in C++

int main() {

    // local variables.
    // These variables can only be used within the scope of main.
    
    // NOTE: Primitive data types
    // Note that the size and precision is dependent on the compiler.
    // Type sizes are expressed in bits
    // Rembember 1 byte = 8 bits

    short int savings_balance; // Integer. (2 bytes = 16 bits)  
    int bank_balance; // Integer. (4 bytes = 32 bits)  
    // This is a whole number. Can be signed or unsigned.
    // E.g. -5 or 16
    // By default, all integers are signed.
   
    unsigned int age; // This is an integer type, but it can only be unsigned!
    // E.g. age can't be a negative value. Age must always be positive.
    
    long int number_of_cars; // This is an integer (32 bits)
    long long int clothes; // This is an integer (64 bits)

    float amount_paid; // Floating point value E.g 80.23 (7 decimals)
    double gas_fees; // Floating point value E.g 80.23 (15 decimals)
    long double lottery_payout; // Floating point value E.g 80.23 (19 decimals)
    
    bool is_online = true; // Boolean. Can only be `true` or `false` (8 bits)
    // 0 = false, anything else = true;

    string name; // Letter

    // NOTE: The char type must be initialized using '' single quotes!
    // Do NOT use " " double quotes! Double quotes are used for strings.
    // If you try to initialize a char type using double quotes,
    // you will get an error.

    char logo = '@'; // Exactly 1 byte = At least 8 bits
    char16_t logo2; // At least 16 bits
    char32_t logo3; // At least 32 bits
    wchar_t logo4; // Can represent the largest available character set.


    // NOTE: When using the string type, you need to make sure that this line,
    // `#include <string>` is at the top of your program, 
    // so that you can use the string functionality.

    // NOTE: There are three different ways that you can initialize a variable,
    // in C++. They are all valid.

    int num1 = 5; // C-like initialization
    int num2 (5); // Constructor like initialization
    
    // NOTE: USE THIS METHOD!!! Save yourself the headache
    int num3 {5}; // C++ list initialization syntax. 
    // 🥇Use This one!!! This version will actually catch overflow errors!
    // E.g. when you have a number that is too big to fit your variable type.
    // With the C-like initialization using the equal sign, 
    // you may get unexpected beahviors!!

    long long int num5 = 8'383'939; // You can also use ' to make is easir to read.
}
