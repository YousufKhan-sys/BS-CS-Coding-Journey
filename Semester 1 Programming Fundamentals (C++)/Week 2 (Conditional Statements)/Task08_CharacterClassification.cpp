#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char a;
    cout << "enter the character" << endl;
    cin >> a;
    if (isdigit(a))
    {
        cout << "it is a digit" << endl;
    }
    else
    {
        switch (a)
        {
        case 'a':
            cout << "vowel" << endl;
            break;
        case 'e':
            cout << "vowel" << endl;
            break;
        case 'i':
            cout << "vowel" << endl;
            break;
        case 'o':
            cout << "vowel" << endl;
            break;
        case 'u':
            cout << "vowel" << endl;
            break;
        default:
            cout << "consonant" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
