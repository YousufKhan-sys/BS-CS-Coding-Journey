#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string paragraph;
    getline(cin, paragraph);

    bool newWord = true;

    for (int i = 0; i < paragraph.length(); i++) {
        if (isspace(paragraph[i]))
            newWord = true;
        else {
            if (newWord) {
                paragraph[i] = toupper(paragraph[i]);
                newWord = false;
            }
        }
    }

    cout << paragraph;
    return 0;
}