#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("students.txt");
    if (!fin) {
        cout << "Error: could not open file students.txt\n";
        return 0;
    }

    int increase;
    cout << "Enter the amount to increase grades by: ";
    cin >> increase;

    cout << "\n--- Updated Grades ---\n";

    string line;
    while (getline(fin, line)) {
        if (line.empty()) continue; 

        size_t commaPos = line.find(",");
        string name = line.substr(0, commaPos);
        int grade = stoi(line.substr(commaPos + 1));

        grade += increase; 

        cout << name << " : " << grade << endl;
    }

    fin.close();

    return 0;
}
