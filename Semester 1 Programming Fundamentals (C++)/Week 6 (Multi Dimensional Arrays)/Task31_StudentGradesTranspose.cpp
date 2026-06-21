#include <iostream>
using namespace std;

int main()
{
    int students, assignments;

    cout << "Enter number of students: ";
    cin >> students;

    cout << "Enter number of assignments: ";
    cin >> assignments;

    int grades[10][10];
    int transpose[10][10];

    cout << "\nEnter grades (Students x Assignments):\n";
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < assignments; j++)
        {
            cout << "Student " << i + 1 << ", Assignment " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    cout << "\nOriginal Matrix (Students x Assignments):\n";
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < assignments; j++)
        {
            cout << grades[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < assignments; j++)
        {
            transpose[j][i] = grades[i][j];
        }
    }

    cout << "\nTransposed Matrix (Assignments x Students):\n";
    for (int i = 0; i < assignments; i++)
    {
        for (int j = 0; j < students; j++)
        {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nAverage Grades for Each Assignment:\n";
    for (int i = 0; i < assignments; i++)
    {
        float sum = 0;
        for (int j = 0; j < students; j++)
        {
            sum += transpose[i][j];
        }
        float avg = sum / students;
        cout << "Assignment " << i + 1 << ": " << avg << endl;
    }

    return 0;
}