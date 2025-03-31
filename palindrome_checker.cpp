// Palindrome Checker that also works for sentences

#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

string filter(string text) {
    string result_text;
    for (char ch : text) {
        if (isalnum(ch) || ch == ' ' || ch == '-' || ch == '_') {
            result_text.push_back(ch);
        }
    }
    return result_text;
}

int main() {
    string s;
    cout << "Please enter your desired word or phrase: \n";
    getline(cin, s);

    s = filter(s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end()); // Remove spaces after filtering

    if (s.empty()) {
        cout << "Error: Input does not contain any valid characters." << endl;
        return 0;
    }

    bool isPalindrome = true;
    int size = s.length();
    for (int i = 0; i < size / 2; i++) {
        if (tolower(s[i]) != tolower(s[size - i - 1])) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The input is a palindrome. \n";
    } else {
        cout << "The input is not a palindrome. \n";
    }

    return 0;
}

