#include <iostream>
#include <string>
using namespace std;

int isPalindrome(string S) {
    int s = 0, e = S.length() - 1;
    while (s <= e) {
        if (S[s] != S[e]) {
            return false;
        }
        s++, e--;
    }
    return true;
}

int main() {
    string S;
    cout << "Enter a string: ";
    cin >> S;
    
    if (isPalindrome(S)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
