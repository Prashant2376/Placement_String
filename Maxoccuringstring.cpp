#include <iostream>
#include <map>
#include <string>

using namespace std;

// Function to find the maximum occurring character in a string.
char getMaxOccuringChar(string str) {
    map<char, int> mpp;

    // Counting frequency of each character in the string.
    for (int i = 0; i < str.length(); i++) {
        mpp[str[i]]++;
    }

    int mx = 0;
    char ans;

    // Finding the character with the maximum frequency.
    for (auto it : mpp) {
        if (it.second > mx) {
            ans = it.first;
            mx = it.second;
        }
    }

    return ans;
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);  // Taking input string from the user.
    
    char maxChar = getMaxOccuringChar(str);
    cout << "The maximum occurring character is: " << maxChar << endl;

    return 0;
}
