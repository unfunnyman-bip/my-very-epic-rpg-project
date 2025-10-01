#include <iostream>
using namespace std;
int main() {
    int temp;
    // clear screen
    for (int i = 0; i < 50; i++) {
        cout << endl;
    }
    cout << "==========================" << endl;
    cout << "      game started!       " << endl;
    cout << "==========================" << endl;
    cout << endl;
    cout << "you are in the game world!" << endl;
    cout << "your adventure begins here..." << endl;
    cout << endl;
    cout << "enter any number to go back to menu: ";
    cin >> temp;
    return 0;
}