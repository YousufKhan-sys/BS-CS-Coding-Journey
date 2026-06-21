#include <iostream>
using namespace std;

int main()
{
    int grade1, grade2, grade3;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    cout << "Enter grade of student 1: ";
    cin >> grade1;
    if (grade1 >= 90 && grade1 <= 100)
    {
        cout << "Letter Grade: A" << endl;
        countA++;
    }
    else if (grade1 >= 80 && grade1 < 90)
    {
        cout << "Letter Grade: B" << endl;
        countB++;
    }
    else if (grade1 >= 70 && grade1 < 80)
    {
        cout << "Letter Grade: C" << endl;
        countC++;
    }
    else if (grade1 >= 60 && grade1 < 70)
    {
        cout << "Letter Grade: D" << endl;
        countD++;
    }
    else if (grade1 >= 0 && grade1 < 60)
    {
        cout << "Letter Grade: F" << endl;
        countF++;
    }

    cout << "Enter grade of student 2: ";
    cin >> grade2;
    if (grade2 >= 90 && grade2 <= 100)
    {
        cout << "Letter Grade: A" << endl;
        countA++;
    }
    else if (grade2 >= 80 && grade2 < 90)
    {
        cout << "Letter Grade: B" << endl;
        countB++;
    }
    else if (grade2 >= 70 && grade2 < 80)
    {
        cout << "Letter Grade: C" << endl;
        countC++;
    }
    else if (grade2 >= 60 && grade2 < 70)
    {
        cout << "Letter Grade: D" << endl;
        countD++;
    }
    else if (grade2 >= 0 && grade2 < 60)
    {
        cout << "Letter Grade: F" << endl;
        countF++;
    }

    cout << "Enter grade of student 3: ";
    cin >> grade3;
    if (grade3 >= 90 && grade3 <= 100)
    {
        cout << "Letter Grade: A" << endl;
        countA++;
    }
    else if (grade3 >= 80 && grade3 < 90)
    {
        cout << "Letter Grade: B" << endl;
        countB++;
    }
    else if (grade3 >= 70 && grade3 < 80)
    {
        cout << "Letter Grade: C" << endl;
        countC++;
    }
    else if (grade3 >= 60 && grade3 < 70)
    {
        cout << "Letter Grade: D" << endl;
        countD++;
    }
    else if (grade3 >= 0 && grade3 < 60)
    {
        cout << "Letter Grade: F" << endl;
        countF++;
    }

    cout << "\nGrade Histogram:" << endl;

    cout << "A: ";
    if (countA == 1)
        cout << "*";
    if (countA == 2)
        cout << "**";
    if (countA == 3)
        cout << "***";
    cout << " (" << countA << ")" << endl;

    cout << "B: ";
    if (countB == 1)
        cout << "*";
    if (countB == 2)
        cout << "**";
    if (countB == 3)
        cout << "***";
    cout << " (" << countB << ")" << endl;

    cout << "C: ";
    if (countC == 1)
        cout << "*";
    if (countC == 2)
        cout << "**";
    if (countC == 3)
        cout << "***";
    cout << " (" << countC << ")" << endl;

    cout << "D: ";
    if (countD == 1)
        cout << "*";
    if (countD == 2)
        cout << "**";
    if (countD == 3)
        cout << "***";
    cout << " (" << countD << ")" << endl;

    cout << "F: ";
    if (countF == 1)
        cout << "*";
    if (countF == 2)
        cout << "**";
    if (countF == 3)
        cout << "***";
    cout << " (" << countF << ")" << endl;

    return 0;
}
