#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
   
    int health_bar {100};
    
    cout << "Enter health bar: " << endl;
    cin >> health_bar;

    switch (health_bar) {
        case 100:
            cout << "You health is at max" << endl;
            break;
        // NOTE: This means 10 or 15 or 20
        // A message will be displayed whenever health hits these exact levels.
        case 10: 
        case 15:
        case 20:
            cout << "Health is critical! Watch out!" << endl;
            break;
        case 50:
            cout << "Protective shield has been lost" << endl;
            break;
        case 0:{
            
            // NOTE: If you are declaring a variable in the case statement,
            // then don't forget to add the {}
            
            char give_up {'N'};
            cout << "Ouch! Do you want to give up (Y/N): ";
            cin >> give_up;

            if (give_up == 'Y') {
                cout << "Thanks for playing" <<endl;
            } else if (give_up == 'N') {
                cout << "Let's get you back into the fight" <<endl;
            } else {
                cout << "Too dizzy to respond properly huh." <<endl;
            }

            break;
        }
        // NOTE: This works like a final `else` statement
        default:
            cout << "You are still in this fight" << endl;
    }


}
