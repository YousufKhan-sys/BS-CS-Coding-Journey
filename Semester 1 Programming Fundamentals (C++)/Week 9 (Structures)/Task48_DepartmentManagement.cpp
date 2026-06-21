#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int id;
    string position;
};

struct Department {
    string name;
    Employee manager;
    Employee employees[10];
    int empCount;
};

void addEmployee(Department &d, Employee e) {
    d.employees[d.empCount] = e;
    d.empCount++;
}

void printDepartment(Department d) {
    cout << "Department: " << d.name << endl;
    cout << "Manager: " << d.manager.name
         << " (" << d.manager.id << ") - "
         << d.manager.position << endl;

    cout << "Employees:" << endl;
    for (int i = 0; i < d.empCount; i++) {
        cout << "- " << d.employees[i].name
             << " (" << d.employees[i].id << ") - "
             << d.employees[i].position << endl;
    }
}

int main() {
    Department dept;
    dept.empCount = 0;
    return 0;
}