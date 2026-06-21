#include <iostream>
#include <string>
using namespace std;

int main() {
    string message,word,oldword;
    int pos;
    getline(cin,message);
    getline(cin,oldword);
    getline(cin,word);
    pos = message.find(oldword);
    message.replace(pos,oldword.length(),word);
    cout << message;
    return 0;
}