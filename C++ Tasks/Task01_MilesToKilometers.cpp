#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    float distance;
    float kilometers;
    cout << "Enter distance in miles" << endl;
    cin >> distance;
    kilometers = (distance * 1.60934);
    cout << "the distance in kilometers is:" << kilometers << endl;
    return 0;
}
