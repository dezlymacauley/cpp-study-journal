#include <iostream>

using std::cout;
using std::endl;

// climits and cfloat include files that contain size,
// and precision information about your implementation of C++
// climit does this for integers
// cfloat does this for floats

// You would use this with the `sizeof` operator
// NOTE: That the numbers return by the `sizeof` operator,
// are determined by the type of operating system you are using!!!

#include <climits>
#include <cfloat>

int main() {
    cout << "sizeof information" << endl;
    cout << "==============================" << endl;
    
    cout << "char: " << sizeof(char) << "bytes." << endl;
    cout << "int: " << sizeof(int) << "bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << "bytes." << endl;
    cout << "short: " << sizeof(short) << "bytes." << endl;
    cout << "long: " << sizeof(long) << "bytes." << endl;
    cout << "long long: " << sizeof(long long) << "bytes." << endl;

    cout << "==============================" << endl;

    cout << "float: " << sizeof(float) << "bytes." << endl;
    cout << "double: " << sizeof(double) << "bytes." << endl;
    cout << "long double: " << sizeof(double) << "bytes." << endl;

/*


char: 1bytes.
int: 4bytes.
unsigned int: 4bytes.
short: 2bytes.
long: 8bytes.
long long: 8bytes.
float: 4bytes.
double: 8bytes.
long double: 12bytes.



*/



}
