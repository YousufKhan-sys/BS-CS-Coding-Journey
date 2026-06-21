#include <iostream>
#include <string>
using namespace std;

int main() {
    string finalMessage = "";
    string sentence;

    while (true) {
        getline(cin, sentence);
        if (sentence == "0")
            break;
        finalMessage += sentence + " ";
    }

    cout << finalMessage;
    return 0;
}