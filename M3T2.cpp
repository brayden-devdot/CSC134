/*
CSC 134
M3T2
Brayden
05/10/2026
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    cout << "=== Craps Simulator (First Roll Only) ===" << endl;

    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    int total = die1 + die2;

    cout << "You rolled: " << die1 << " + " << die2 << " = " << total << endl;

    // Instant win conditions
    if (total == 7 || total == 11) {
        cout << "You win!" << endl;
    }
    // craps
    else if (total == 2 || total == 3 || total == 12) {
        cout << "Craps! You lose!" << endl;
    }
    
    else {
        cout << "No instant win or loss." << endl;
        cout << "Point would be set to: " << total << endl;
        cout << "(Point system not implemented yet.)" << endl;
    }

    return 0;
}
