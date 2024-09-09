#include <iostream>
#include <string>

using namespace std;

string merge(string S1, string S2) {
    string s;
    int n = S1.length(), m = S2.length();
    int i = 0, j = 0;

    // Merging the strings alternately.
    while (i < n && j < m) {
        s += S1[i];
        s += S2[j];
        i++;
        j++;
    }

    // Adding remaining characters from S1.
    while (i < n) {
        s += S1[i];
        i++;
    }

    // Adding remaining characters from S2.
    while (j < m) {
        s += S2[j];
        j++;
    }

    return s;
}

int main() {
    string S1, S2;

    // Taking input strings from the user.
    cout << "Enter the first string: ";
    getline(cin, S1);
    cout << "Enter the second string: ";
    getline(cin, S2);

    string mergedString = merge(S1, S2);
    cout << "Merged string: " << mergedString << endl;

    return 0;
}
