#include <iostream>

using namespace std;

int main() {
    
    // NOTE: This syntaxt is only valid because of the line,
    // `using namespace std`
    cout << "Hello, world" << endl;

    // NOTE: If you did not add the line `using namespace std;`
    // you would have to add `std::` before using cout and endl.
    std::cout << "This is my message" << std::endl;
    return 0;
}

// NOTE: WARNING about `using namespace std`

/*

However, be cautious when using using namespace std; in larger projects,
or header files, as it can lead to naming conflicts,
if multiple namespaces are used or if new names are introduced,
in future versions of the C++ standard library. 

It's generally considered good practice to use using namespace std;
in small programs or specific code sections, 
but to avoid it in larger projects where namespace conflicts,
can be more problematic. 

Alternatively, you can use specific items from the std namespace selectively, 
like using std::cout; to only bring in the specific name you need.


*/
