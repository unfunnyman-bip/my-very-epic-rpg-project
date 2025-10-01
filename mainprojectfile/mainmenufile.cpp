#include <iostream>
using namespace std;
FILE* openingamefile() {
    FILE* file = fopen_s("ingame.cpp", "a+");
    if (!file) {
        cout << "error when reading file";
    }
    return file;
}
int main() {
    int choice;
    while (true) {
        for (int i = 0; i < 50; i++) {
            cout << endl; //screen clear
        }
        cout << "--------------------" << endl;
        cout << "| my very cool rpg |" << endl;
        cout << "|  menu made by me |" << endl;
        cout << "| (pavel)          |" << endl;
        cout << "-------------------- " << endl;
        cout << endl;
        cout << endl;
        cout << "    ___________    " << endl;
        cout << "   |   play   |   " << endl;
        cout << "    -----------    " << endl;
        cout << "        [1]        " << endl;
        cout << endl;
        cout << "    ___________    " << endl;
        cout << "   |   exit   |   " << endl;
        cout << "    -----------    " << endl;
        cout << "        [2]        " << endl;
        cout << endl;
        cout << endl;
        cout << "enter your choice (1 or 2): ";
        cin >> choice;
        if (choice == 1) {
            FILE* ingamefile = openingamefile();
            if (ingamefile) {
                fclose(ingamefile);
            }
            for (int i = 0; i < 50; i++) {
                cout << endl;
            }
            cout << "starting game..." << endl;
            cout << "(this would load ingame.cpp)" << endl;
            cout << "game ended. press enter to continue...";
            cin >> choice;
            continue;
        }
        else if (choice == 2) {
            for (int i = 0; i < 50; i++) {
                cout << endl;
            }
            cout << "goodbye!" << endl;
            break;
        }
        else {
            cout << "invalid choice! please enter 1 or 2." << endl;
            cout << "press enter to continue...";
            cin >> choice;
        }
    }
    return 0;
}