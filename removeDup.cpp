#include <iostream>
#include <string>
#include <set>

using namespace std;

string removeDuplicates(const string& str) {
    string s = "";
    set<char> st;

    for (int i = 0; i < str.size(); i++) {
        if (st.find(str[i]) == st.end()) {
            st.insert(str[i]);
            s += str[i];
        }
    }
    return s;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = removeDuplicates(input);
    cout << "String after removing duplicates: " << result << endl;

    return 0;
}
