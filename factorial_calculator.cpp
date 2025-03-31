// Factorial Calculator
#include <iostream>
#include <math.h>

using namespace std;

int x, z;
unsigned long long y;
char option;

int main() {
    // Write C++ code here
    jump:
    y = 1;
    cout << "Please enter a non-negative integer: ";
    cin >> x;
    z = x;
    
    if (x < 0) {
        cout << "Error: " << x << " is a negative integer. \n";
        goto jump;
    } else if (x == 0) {
        cout << x << "! = " << 1 << "\n";
        cout << "Would you like to calculate another factorial? (y/n): ";
        cin >> option;
        if (option == 'y') {
            goto jump;
        } else {
            cout << "Goodbye! \n";
            return 0;
        }
    } else {
        for (int i = 1; i < z ; i++) {
            y = y*x;
            x--;
        }
        cout << z << "! = " << y << "\n";
        cout << "Would you like to calculate another factorial? (y/n): ";
        cin >> option;
        if (option == 'y') {
            goto jump;
        } else {
            cout << "Goodbye! \n";
            return 0;
        }
    }

    return 0;
}
