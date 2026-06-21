#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    string grade;
};

void addStudent() {
    Student s;
    ofstream fout("students.txt", ios::app); 
    if (!fout) {
        cout << "Error opening file!\n";
        return;
    }
    cout << "\nEnter student name: ";
    cin.ignore();
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter grade: ";
    cin >> s.grade;
    fout << s.name << "," << s.roll << "," << s.grade << endl;

    fout.close();
    cout << "\nStudent record added successfully!\n";
}

void displayStudents() {
    ifstream fin("students.txt");

    if (!fin) {
        cout << "\nNo records found! File missing or empty.\n";
        return;
    }

    cout << "\n--- Student Records ---\n";

    string name, grade;
    int roll;

    while (fin.good()) {
        string line;
        getline(fin, line);

        if (line.empty()) continue;

        size_t pos1 = line.find(",");
        size_t pos2 = line.find(",", pos1 + 1);

        name = line.substr(0, pos1);
        roll = stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
        grade = line.substr(pos2 + 1);

        cout << "Name: " << name
             << " | Roll: " << roll
             << " | Grade: " << grade << endl;
    }

    fin.close();
}

int main() {
    int choice;

    while (true) {
        cout << "\n=== Student Record Management ===\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            cout << "\nExiting program...\n";
            return 0;
        default:
            cout << "\nInvalid choice! Try again.\n";
        }
    }

    return 0;
}
