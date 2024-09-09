#include <iostream>
#include <string>

using namespace std;

int lengthOfLastWord(const string& s) {
    int n = s.size();
    int count = 0;
    bool flag = false;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            count++;
            flag = true;
        } else {
            if (flag) {
                break;
            }
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int length = lengthOfLastWord(input);
    cout << "Length of the last word: " << length << endl;

    return 0;
}
