// GCD Calculator Using Euclid’s Algo
#include <iostream>
#include <algorithm>

using namespace std;

int a,b, a_original, b_original;
float rem;
char choice;

int main() {
    redo:
   do {
    cout << "Enter the first positive integer: ";
    cin >> a;
    cout << "Enter the second positive integer: ";
    cin >> b;
    
    if (a <= 0 || b <= 0) {
        cout << "\n";
        cout << "Error: Please enter positive integers only. \n \n";
        goto redo;
    }
    
    if (a<b){
        swap(a,b);
    }
    
    a_original = a;
    b_original = b;
    
        do {
            rem = a % b;
            if (rem == 0){
                cout << "The GCD of " << a_original << " and " << b_original << " is " << b << "\n";
                cout << "\n";
                cout << "Would you like to calculate another GCD? (y/n): ";
                cin >> choice;
                cout << "\n";
            }
            a = b;
            b = rem;
        } while (rem != 0);
        
   } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!";
    

    return 0;
}
