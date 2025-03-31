// Prime Number Checker through Factor checking
#include <iostream>

using namespace std;

float r;
int n, f;
char choice;

int main() {
    
    do {
    cout << "Please enter a positive integer greater than 1: ";
    cin >> n;
    
    while ( n < 2){
        cout << "ERROR: Please enter a positive integer greater than 1. \n";
        cout << "Please enter a positive integer greater than 1: ";
    cin >> n;
    }
    
    for (int i = 1; i <= n; i++) {
        r = n % i;
        if (r == 0){
            f=f+1;
        }
    }
    
    if (f==2){
        cout << n << " is a prime number.\n";
        cout << "Would you like to check another number? (y/n): ";
        cin >> choice;
    } else {
        cout << n << " is not a prime number.\n";
        cout << "Would you like to check another number? (y/n): ";
        cin >> choice;
    }
    
    f=0;
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Goodbye!";
    f=0;

    return 0;
}
