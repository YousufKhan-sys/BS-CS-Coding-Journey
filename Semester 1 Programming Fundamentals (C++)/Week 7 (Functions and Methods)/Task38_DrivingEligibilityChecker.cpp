#include <iostream>
using namespace std;

int motorcycle_agecheck(int a) {
	if (a >= 16) {
		return 1;
	}
	else {
		return 0;
	}
}
int car_agecheck(int a) {
	if (a >= 18) {
		return 1;
	}
	else {
		return 0;
	}
}
int license_check(string choice) {
	if (choice == "yes") {
		return 1;
	}
	else if (choice == "no") {
		return 0;
	}
}

int main()
{
	string choice,vehicle;
	int a = 0;
	cout << "Enter your Age" << endl;
	cin >> a;
	cout << "Enter your Preferenced Vehicle(car/motorcycle)" << endl;
	cin >> vehicle;
	cout << "Do you have a license(yes/no)" << endl;
	cin >> choice;
	if (vehicle == "car") {
		if (car_agecheck(a) && license_check(choice)) {
			cout<<"You are eligible to drive"<<endl;
		}
		else
		{
		cout<<"You are not eligible to drive"<<endl;
		}
	}
	else if (vehicle == "motorcycle") {
		if (motorcycle_agecheck(a) && license_check(choice)) {
			cout << "You are eligible to Ride"<<endl;
		}
		else {
			cout<<"You are not eligible to Ride"<<endl;
		}
	}
	return 0;
}