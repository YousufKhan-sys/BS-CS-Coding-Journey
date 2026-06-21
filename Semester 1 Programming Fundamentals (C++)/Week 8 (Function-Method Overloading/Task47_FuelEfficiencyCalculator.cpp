#include <iostream>
#include <string>
using namespace std;

double fuelEfficiency(int engineDisplacement, double fuelRate, double weight) {
    return (10000.0 / fuelRate) * (1000.0 / (weight + engineDisplacement));
}

double fuelEfficiency(int cargoWeight, float enginePower, double dragCoeff) {
    return (5000.0 / enginePower) * (1000.0 / (cargoWeight * dragCoeff + 1));
}

double fuelEfficiency(string aircraftType, double altitude, float airspeed) {
    double baseEfficiency = (aircraftType == "Private" || aircraftType == "private") ? 50.0 : 200.0;
    return baseEfficiency / (airspeed / 100.0) * (1 + altitude / 50000.0);
}

int main() {
    return 0;
}