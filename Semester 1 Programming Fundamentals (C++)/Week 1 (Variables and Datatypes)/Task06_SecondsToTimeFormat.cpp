#include <iostream>
using namespace std;
int main()
{
    int sec, time_hour, time_min, time_sec, remainder, remainder1;
    cout << "Enter time in seconds" << endl;
    cin >> sec;
    remainder = sec % 3600;
    time_hour = sec / 3600;
    remainder1 = sec % 60;
    time_min = remainder / 60;
    time_sec = remainder1;
    cout << "Hour: " << time_hour << "  Min: " << time_min << "  Sec: " << time_sec << endl;
    return 0;
}
