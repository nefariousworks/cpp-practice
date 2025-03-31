//Fibonacci Sequence Generator using the golden ration formula
#include <iostream>
#include <cmath>

using namespace std;

const float phi = 1.618, phib = -0.618, root_five = 2.236067;
int term;
float a, b, c;
int d;
char option = 'y';
int main() {
    do {
    cout << "Please enter the number of terms: ";
    cin >> term;
    if (term < 0) {
        cout << "Error: Please enter a positive integer. \n";
        continue;
    }
    cout << "Fibonacci sequence: ";
    for (int n = 0; n <= term; n++) {
        a = pow(phi, n);
        b = pow(phib, n);
        c = (a-b)/root_five;
        d = round(c);
        cout << d << " ";
    }
    cout << "\n";
    cout << "Would you like to generate another sequence? (y/n): ";
    cin >> option;
    } while (option == 'y' || option == 'Y');
    
    cout << "Goodbye!";

    return 0;
}
