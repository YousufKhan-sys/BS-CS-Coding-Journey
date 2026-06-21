#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string modifyString(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
        if (s[i] == ' ')
            s[i] = '_';
    }

    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }

    return s;
}

int main() {
    string input;
    getline(cin,input);
    cout << modifyString(input);
    return 0;
}