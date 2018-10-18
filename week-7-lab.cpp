#include <iostream>
// Library needed to get a random seed
#include <time.h>
using namespace std;

int main() {
    int x;
    int bal;
    int amount;
    bal = 500;
    // Gets a random seed for our rand() function
    srand( time(NULL) );    
    // Picks either 0 or 1 randomly with equal probablilty
    while (1 == 1) {
        cout << "your balance is now..." << bal << endl;
        if (bal == 0) {
            cout << "you lost all your monney" << endl;
            break;
        } 
        cout << "Place your bets!! " << endl;
        cout << "input either a 1 or 0 " << endl;
        cout << "or input another number to cash out..." << endl;
        cout << "How much do you want to bet?" << endl;
        cin >> amount;
        cout << "you bet..." << amount << endl;
        cout << "Now choose a 1 or a 0" << endl;
        cin >> x;
        if (x >= 2) {
        cout << "You choose to cash out, your balance is..." << bal << endl;
        break;
        }
        int random = rand() % 2;
        cout << random;
        if (1 == random) {
            bal = amount + bal;
        }
        else if (0 == random) {
            bal = bal - amount;
        }

    }
    
    return 0;
}