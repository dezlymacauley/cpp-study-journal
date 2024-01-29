/*

NOTE: Example 1:

`lower op higher`   : the lower is promoted to a higher
2 * 5.2
2 is promoted to 2.0
===============================================================================

NOTE: Example 2:

`lower = higher;`   : the higher is demoted to a lower
int num {0};
num = 100.2;

100.2 will be demoted to the integer num. 
What this means is that because num is an int, 
what will actually be stored is the number 100! NOT 100.2!


*/

#include <iostream>
using std:: cout;
using std:: endl;


int main() {
   
    // NOTE: Example 1

    double fav_num {5.2};
    fav_num = fav_num * 2; 
    // What is happening behind the scenes is that 2,
    // is actually being converted to 2.0

    cout << fav_num << endl;


    // NOTE: Example 2

    // num is an int and is assigned the value of zero.
    int num {0};
    // num = 100.2;
    
    // You will get this compiler warning:
    //   Implicit conversion from 'double' to 'int', 
    // changes value from 100.2 to 100 clang (-Wliteral-conversion) [32, 11]
    // This is because the variable type of the number 100.2 is a double,
    // and int is a num.
    
    cout << num << endl;

}

