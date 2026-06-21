#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string w1, w2, w3, w4, choice;
    cout << "Enter the first word for your quote: ";
    cin >> w1;
    cout << "Enter the second word: ";
    cin >> w2;
    cout << "Enter the third word: ";
    cin >> w3;
    cout << "Enter the fourth word: ";
    cin >> w4;
    cout << "\nYou entered: " << w1 << " " << w2 << " " << w3 << " " << w4 << endl;
    string u1 = w1, u2 = w2, u3 = w3, u4 = w4;
    for (int i = 0; i < u1.length(); i++) u1[i] = toupper(u1[i]);
    for (int i = 0; i < u2.length(); i++) u2[i] = toupper(u2[i]);
    for (int i = 0; i < u3.length(); i++) u3[i] = toupper(u3[i]);
    for (int i = 0; i < u4.length(); i++) u4[i] = toupper(u4[i]);
    cout << "\nQUOTE IN UPPERCASE: "
         << u1 << " " << u2 << " " << u3 << " " << u4 << endl;
    cout << "\nAre you sure you want to convert the quote in Uppercase (yes/no)? ";
    cin >> choice;
    if (choice == "yes" || choice == "YES" || choice == "Yes") {
        ofstream fout("Quotes.txt", ios::app);
        if (!fout) {
            cout << "Error opening file!\n";
            return 0;
        }
        fout << u1 << " " << u2 << " " << u3 << " " << u4 << endl;
        fout.close();

        cout << "\nQuote saved to file successfully!\n";
    }
    else {
        cout << "\nQuote was NOT saved.\n";
    }
    return 0;
}
