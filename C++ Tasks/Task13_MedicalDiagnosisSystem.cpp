#include <iostream>
using namespace std;

int main()
{
    float temperature;

    cout << "Enter the body temperature in Celsius: ";
    cin >> temperature;

    if (temperature < 36.5)
    {
        cout << "Hypothermia: Your body temperature is below normal." << endl;
    }
    else if (temperature >= 36.5 && temperature <= 37.5)
    {
        cout << "Normal Body Temperature: Your temperature is within the healthy range." << endl;
    }
    else if (temperature >= 37.6 && temperature <= 38.5)
    {
        cout << "Low-Grade Fever: Your body temperature is slightly elevated." << endl;
    }
    else
    {
        cout << "High Fever: Your body temperature is significantly elevated. Please consult a doctor." << endl;
    }

    return 0;
}
