#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);

    if (str1.length() < str2.length())
        cout << str1;
    else if (str2.length() < str1.length())
        cout << str2;
    else
        cout << "Equal length";

    return 0;
}