#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int y, m, d, y1, m1, d1, x;
    cout << "enter year" << endl;
    cin >> y;
    cout << "enter month" << endl;
    cin >> m;
    cout << "enter day" << endl;
    cin >> d;
    y1 = y - (14 - m) / 12;
    x = y1 + y1 / 4 - y1 / 100 + y1 / 400;
    m1 = m + 12 * ((14 - m) / 12) - 2;
    d1 = (d + x + (31 * m1) / 12) % 7;
    switch (d1)
    {
    case 0:
        cout << "sunday" << endl;
        break;
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "tuesday" << endl;
        break;
    case 3:
        cout << "wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "friday" << endl;
        break;
    case 6:
        cout << "saturday" << endl;
        break;
    }

    return 0;
}
