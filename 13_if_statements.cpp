#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int secret_number {7};
int guess {0};

int main() {
    cout << "Hint: The secret number is a single digit number" << endl;
     
    cout << "Guess the secret number: ";
    cin >> guess;
    
    if (guess == secret_number) {
       
        // NOTE: This is a nested if statement
        if (guess % 2 == 0){
            cout << "Your guess is correct" << endl;
            cout << guess << " is an even number" << endl;
        } else {
            cout << "Your guess is correct" << endl;
            cout << guess << " is an odd number" << endl;
        }

    } else if (guess < secret_number) {

        cout << "Your guess is too low" << endl;
    } else {

        cout << "Your guess is too high" << endl;
    } 


}


