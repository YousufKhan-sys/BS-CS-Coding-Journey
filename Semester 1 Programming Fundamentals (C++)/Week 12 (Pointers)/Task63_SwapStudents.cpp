#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    char grade;
};

void swapStudents(Student *s1, Student *s2)
{
    Student temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
int main()
{
    Student a = {"Ali", 16, 'A'};
    Student b = {"Sara", 15, 'B'};

    cout << "Before swap:\n";
    cout << "A: " << a.name << ", " << a.age << ", " << a.grade << endl;
    cout << "B: " << b.name << ", " << b.age << ", " << b.grade << endl;
    swapStudents(&a, &b);

    cout << "\nAfter swap:\n";
    cout << "A: " << a.name << ", " << a.age << ", " << a.grade << endl;
    cout << "B: " << b.name << ", " << b.age << ", " << b.grade << endl;
    return 0;
}
