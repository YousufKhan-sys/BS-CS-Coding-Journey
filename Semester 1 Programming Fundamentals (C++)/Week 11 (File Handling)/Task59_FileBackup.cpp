#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("catalog.txt");
    ofstream fout("backup.txt");
    if (!fin) {
        cout << "Error: Could not open catalog.txt" << endl;
        return 1;
    }
    if (!fout) {
        cout << "Error: Could not create backup.txt" << endl;
        return 1;
    }
    string line;
    while (getline(fin, line)) {
        fout << line << endl;
    }
    fin.close();
    fout.close();

    cout << "Backup created successfully!" << endl;
    return 0;
}
