#include <iostream>
using namespace std;
#include "in-game functions.h"
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
    cout << "press enter to continue..." << endl;
    cin.ignore();
    cin.get();
    monster(strength, agility, intelligence);
    return 0;
}