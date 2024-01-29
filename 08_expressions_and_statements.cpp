/*

NOTE: What is a statement?

A statement is like a complete sentence in C++. 
It is a standalone instruction that performs some action. 

In C++ statements often end with a semicolon;
E.g. int favourite_number = 15;

Statements can contain expressions.
x = 2 * 5;

The whole thing is the expression.
2 * 5 is the statement.

===============================================================================
NOTE: What is an expression?

An expression is like a phrase that represents computation.
E.g. 

34              // literal
favourite_number // a variable is an expression
5 + 3
x * 2
a > b
a = b

Expressions evaluate to a value.

*/


int main() {

    int num1 {10};
    int num2 {20};
    
    // Statements are read from right to left.
    // The value on the left is evaluated and then assigned to the value,
    // on the right.
    // E.g. 1000 is assigned to num2, and then num2 is used to assign,
    // the value of 1000 to num1.
    // If you run this program. num2 = 1000 and num1 = 1000
    num1 = num2 = 1000;

    return 0;

}


// NOTE: WARNING For Integer Division!
// 100 / 200 = 0 Not 0.5! (It would only be 0.5 if you were using floats)
// If you want to 0.5 to show the you need to use the type `double`.

// NOTE: % This operator gives you the reminder of a division
// E.g. 200 % 100 = 0
// E.g. 10 % 3 = 1
