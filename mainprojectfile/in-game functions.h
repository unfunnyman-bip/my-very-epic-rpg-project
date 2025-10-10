#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
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
    cout << "starting attributes:" << endl;
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
        cout << "you chose agility!" << endl;
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
void monster(int& strength, int& agility, int& intelligence) {
    clear();
    cout << "======================================" << endl;
    cout << "   you hear a growl in the forest  " << endl;
    cout << "======================================" << endl;
    cout << "a wild Goblin appears!" << endl;
    cout << endl;
    cout << "what will you do?" << endl;
    cout << "   [1] fight like a real man" << endl;
    cout << "   [2] run away like a scared chicken" << endl;
    cout << "enter your choice: ";
    int choice;
    cin >> choice;
    if (choice == 2) {
        clear();
        cout << "you sprint down the forest path escaping the goblin!" << endl;
        cout << "after a while you arrive at the entrance to a dark dungeon..." << endl;
        cout << "press enter to continue...";
        cin.ignore();
        cin.get();
        return;
    }
    clear();
    cout << "the battle has begun" << endl;
    cout << "action:" << endl;
    cout << "   [1] smash with brute force (requires strength >= 8)" << endl;
    cout << "   [2] dodge and counter (requires agility >= 8)" << endl;
    cout << "   [3] cast a spell (requires intelligence >= 8)" << endl;
    cout << "enter your action: ";
    int action;
    cin >> action;
    bool survived = false;
    switch (action) {
    case 1:
        if (strength >= 8) {
            cout << "you brute force the goblin and defeat it" << endl;
            survived = true;
            strength += 2; agility += 1; intelligence += 1;
        }
        else {
            cout << "you're not strong enough so you lose" << endl;
        }
        break;
    case 2:
        if (agility >= 8) {
            cout << "you dodged and countered" << endl;
            survived = true;
            agility += 2; strength += 1; intelligence += 1;
        }
        else {
            cout << "too slow brud the goblin catches up" << endl;
        }
        break;
    case 3:
        if (intelligence >= 8) {
            cout << "you cast a spell and defeat the goblin" << endl;
            survived = true;
            intelligence += 2; strength += 1; agility += 1;
        }
        else {
            cout << "your spell kinda bad so you die" << endl;
        }
        break;
    default:
        cout << "you hesitate and the goblin attacks you" << endl;
        break;
    }
    if (survived) {
        cout << "you won! attribute increase:" << endl;
        cout << "strength:     " << strength << endl;
        cout << "agility:      " << agility << endl;
        cout << "intelligence: " << intelligence << endl;
        cout << "press enter to continue" << endl;
    }
    else {
        cout << "you died haha" << endl;
        cout << "enter to exit like a hobo" << endl;
    }
    cin.ignore();
    cin.get();
}
void dungeon(int& strength, int& agility, int& intelligence) {
    clear();
    cout << "======================================" << endl;
    cout << "        dark dungeon             " << endl;
    cout << "======================================" << endl;
    cout << endl;
    cout << "you descend into the dark dungeon..." << endl;
    cout << "after navigating treacherous corridors," << endl;
    cout << "you find the legendary treasure room!" << endl;
    cout << endl;
    cout << "what will you do with the treasure?" << endl;
    cout << "   [1] take it all (greedy)" << endl;
    cout << "   [2] share with village (wise)" << endl;
    cout << "   [3] leave it (cautious)" << endl;
    cout << "enter your choice: ";
    int choice;
    cin >> choice;
    clear();
    cout << "======================================" << endl;
    cout << "         your adventure is complete          " << endl;
    cout << "======================================" << endl;
    cout << endl;
    switch (choice) {
    case 1:
        cout << "you become the richest person in the land!" << endl;
        cout << "but you live looking over your shoulder..." << endl;
        strength += 5; agility += 3; intelligence -= 2;
        break;
    case 2:
        cout << "the village hails you as a hero!" << endl;
        cout << "you live comfortably and respected." << endl;
        intelligence += 5; strength += 2; agility += 2;
        break;
    case 3:
        cout << "you leave the treasure untouched." << endl;
        cout << "your legend grows through your wisdom." << endl;
        agility += 5; intelligence += 3; strength += 1;
        break;
    default:
        cout << "you hesitate and the treasure vanishes!" << endl;
        cout << "at least you survived the adventure." << endl;
        break;
    }
    cout << endl;
    cout << "final attributes:" << endl;
    cout << "strength:     " << strength << endl;
    cout << "agility:      " << agility << endl;
    cout << "intelligence: " << intelligence << endl;
    cout << endl;
    cout << "thanks for playing!" << endl;
    cout << "press enter to return to main menu...";
    cin.ignore();
    cin.get();
}
#endif