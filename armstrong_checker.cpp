// Armstrong number checker
#include <bits/stdc++.h>
using namespace std;

int x = 0;
string num;
int len;
int ans = 0;
int holder = 0;

int main() {
    // Write C++ code here
    cout << "Please enter a positive number: ";
    cin >> x;
    if (x < 0) {
        cout << "Error: " << x << " is not a positive number.";
        return 0;
    }
    num = to_string(x);
    len = num.length();
    for (int i=0; i<len; i++){
        holder = num[i] - '0';
        holder = pow(holder,len);
        ans = ans + holder;
    }
    // holder = num[0] - '0';
    // holder = pow(holder,len);
    // ans += holder;
    if (ans == x){
        cout << x << " is an Armstrong number." << "\n";
    } else {
        cout << x << " is not an Armstrong number." << "\n";
    }
    

    return 0;
}
