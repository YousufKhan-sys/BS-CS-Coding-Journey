#include <iostream>
using namespace std;

void exchangeKeys(int *keyA, int *keyB)
{
    cout << "Opening both containers..." << endl;

    int temp = *keyA;
    *keyA = *keyB;
    *keyB = temp;

    cout << "Exchanging keys..." << endl;

    cout << "Closing containers with new keys..." << endl;
}

int main()
{
    int container1Key = 111;
    int container2Key = 222;

    cout << "Before Exchange:" << endl;
    cout << "Container 1 Key: " << container1Key << endl;
    cout << "Container 2 Key: " << container2Key << endl;

    exchangeKeys(&container1Key, &container2Key);

    cout << "\nAfter Exchange:" << endl;
    cout << "Container 1 Key: " << container1Key << endl;
    cout << "Container 2 Key: " << container2Key << endl;

    cout << "\nVerification:" << endl;
    if (container1Key == 222 && container2Key == 111)
        cout << "Key exchange successful. Containers secured with exchanged keys." << endl;
    else
        cout << "Key exchange failed!" << endl;

    return 0;
}
