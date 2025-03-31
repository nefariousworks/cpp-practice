// perfect number checker

#include <iostream>
#include <math.h>

using namespace std;

int in;
int perf = 0;
char choice = 'y';

void perf_checker (int a) {
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            perf = perf + i;
        }
    }
    if (perf==a) {
        cout << a << " is a perfect number.\n";
    } else {
        cout << a << " is not a perfect number.\n";
    }
}

int main() {
    
    do {
    cout << "Enter a positive integer: ";
    cin >> in;
    if (in <= 0) {
        cout << in << " is not a positive integer. \n";
        continue; // restarts the last loop i.e. do (line 13) in this case
    }

    perf_checker (in);
    
    perf = 0;
    cout << "Would you like to check another number? (y/n): ";
    cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    cout << "Goodbye!";
    
    return 0;
}
