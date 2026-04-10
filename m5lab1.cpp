#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Brayden
04/10/2026
*/

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_basement();
void choice_attic();

int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    cout << "\nMain Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        choice_front_door();
    } else if (choice == 2) {
        choice_back_door();
    } else if (choice == 3) {
        choice_go_home();
    } else if (choice == 4) {
        cout << "Ok, quitting game." << endl;
        return;
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        main_menu();
    }
}

void choice_front_door() {
    cout << "\nYou try the front door..." << endl;
    cout << "It's locked, but you hear something moving inside." << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        choice_back_door();
    } else if (choice == 2) {
        choice_go_home();
    } else {
        cout << "Invalid choice. Returning to main menu." << endl;
        main_menu();
    }
}

void choice_back_door() {
    cout << "\nYou sneak around to the back of the house." << endl;
    cout << "The back door is cracked open, and a cold breeze flows out." << endl;
    cout << "Do you:" << endl;
    cout << "1. Enter the dark basement stairs you see inside" << endl;
    cout << "2. Climb the rickety ladder up to the attic window" << endl;
    cout << "3. Run back to safety" << endl;
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        choice_basement();
    } else if (choice == 2) {
        choice_attic();
    } else if (choice == 3) {
        choice_go_home();
    } else {
        cout << "Invalid choice. Returning to main menu." << endl;
        main_menu();
    }
}

void choice_go_home() {
    cout << "\nYou decide this spooky house isn't worth it." << endl;
    cout << "You head home, make some hot chocolate, and watch TV instead." << endl;
    cout << "Probably the safest ending!" << endl;
}

void choice_basement() {
    cout << "\nYou step into the basement..." << endl;
    cout << "It's pitch black except for a faint glow in the corner." << endl;
    cout << "As you approach, you realize it's a treasure chest!" << endl;
    cout << "Congratulations — you found the hidden treasure!" << endl;
}

void choice_attic() {
    cout << "\nYou climb up into the attic." << endl;
    cout << "A shadowy figure stands in the corner..." << endl;
    cout << "It turns out to be a friendly cat who just wants attention." << endl;
    cout << "You pet the cat and gain a new furry friend. Good ending!" << endl;
}
