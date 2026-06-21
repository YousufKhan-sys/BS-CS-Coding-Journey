#include<iostream>
using namespace std;
int main(){
	int employees,wage,hours,payroll;
	cout << "Enter the number of employees" <<endl;
	cin >> employees;
	for (int i = 1; i <= employees; i++){
		cout << "enter the hourly wage" << endl;
		cin >> wage;
		cout << "enter the working hours" << endl;
		cin >> hours;
		payroll = hours*wage;
		cout << "Payroll of employee  " << i << endl;
		cout << payroll << endl;
	}
	system("pause");

	return 0;
}
