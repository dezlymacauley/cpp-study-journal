#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
   
    int health_bar {100};
    
    cout << "Enter health bar: " << endl;
    cin >> health_bar;

    switch (health_bar) {
        
        // NOTE: This means 10 or 15 or 20
        // A message will be displayed whenever health hits these exact levels.
        case 100:
            cout << "You health is at max" << endl;
            break;
        case 10: 
        case 15:
        case 20:
            cout << "Health is critical! Watch out!" << endl;
            break;
        case 50:
            cout << "Protective shield has been lost" << endl;
            break;

        // NOTE: This works like a final `else` statement
        default:
            cout << "You are still in this fight" << endl;
    }


    

}
