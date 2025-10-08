#include <iostream>
using namespace std;
void clear() {
    for (int i = 0; i < 50; i++) cout << endl;
}
void attributemenu(int& strength, int& agility, int& intelligence) {
    clear();
    cout << "======================================" << endl;
    cout << "      welcome to the rpg!!! you have loaded in (thankfully)      " << endl;
    cout << "======================================" << endl;
    cout << endl;
    cout << "starting attributes:"<< endl;
    cout << endl;
    cout << "   .----------------------------.   " << endl;
    cout << "   |  [1] strength   (warrior)  |   " << endl;
    cout << "   |  [2] agility    (rogue)    |   " << endl;
    cout << "   |  [3] intelligence (mage)   |   " << endl;
    cout << "   '----------------------------'   " << endl;
    cout << endl;
    cout << "enter your choice (1-3): ";
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            strength = 10; agility = 5; intelligence = 3;
            cout << "you chose strength!" << endl;
            break;
        case 2:
            strength = 5; agility = 10; intelligence = 3;
            cout << "you chose agility!"<< endl;
            break;
        case 3:
            strength = 3; agility = 5; intelligence = 10;
            cout << "you chose intelligence!" << endl;
            break;
        default:
            cout << "invalid choice! choosing strength instead" << endl;
            strength = 10; agility = 5; intelligence = 3;
            break;
    }
    cout << "press enter to continue...";
    cin.ignore();
    cin.get();
}

int main() {
    int strength = 0, agility = 0, intelligence = 0;
    attributemenu(strength, agility, intelligence);
    clear();
    cout << "==============================" << endl;
    cout << "   you're in a dark spooky forest " << endl;
    cout << "==============================" << endl;
    cout << endl;
    cout << "attributes: " << endl;
    cout << "strength:     " << strength << endl;
    cout << "agility:      " << agility << endl;
    cout << "intelligence: " << intelligence << endl;
    cout << endl;
    cout << "your rpg adventure is beninging..." << endl;
    cout << "(конец кода пока что введи любую цифру чтобы вернуться в меню): ";
    int temp;
    cin >> temp;
    return 0;
}