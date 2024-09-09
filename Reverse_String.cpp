#include <iostream>
#include <string>
using namespace std;

string reverseWord(string str) {
    int s = 0, e = str.size() - 1;
    while (s < e) {
        swap(str[s], str[e]);
        s++;
        e--;
    }
    return str;
}

int main() {
    string str;
    cout << "Enter a word: ";
    cin >> str;
    cout << "Reversed word: " << reverseWord(str) << endl;
    return 0;
}
