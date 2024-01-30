#include <iostream>
using std::cout;
using std::endl;

int main() {
    
    // NOTE: First define the enum
    enum Direction {
        left, right, up, down
    };
    
    // NOTE: Then create a variable based on the enum
    Direction player_movement {left};

    switch (player_movement) {
        case left:
            cout << "Player is moving left" << endl;
        case right:
            cout << "Player is moving right" << endl;
        default:
            cout << "Player is moving" << endl;
    }
    
    return 0;
}
