#include <iostream>
using namespace std;

int sum(int a,int b) {
	return "Result :", a + b;
}
int subtract(int a, int b) {
	return "Result :", a - b;
}
int multiply(int a, int b) {
	return "Result :",a * b;
}
int divide(int a, int b) {
	return "Result :", a/b;
}
int exponent(int a, int b) {
	int base = a, exp = b, result = 1;
	for (int i = 0; i < exp; ++i) {
		result *= base;
	}
	return "Result :", result;
}
int main()
{
	int a, b,choice,endresult;
	cout << "Enter first integer" << endl;
	cin >> a;
	cout << "Enter second integer" << endl;
	cin >> b;
	cout << "Select options (ADD,SUBTRACT,MULTIPLY,DIVIDE,EXPONENT)(1-5)" << endl;
	cin >> choice;
	if (choice == 1) {
		cout<<"Result:"<<sum(a, b)<<endl;
	}
	else if (choice == 2) {
		cout << "Result:" << subtract(a, b) << endl;
	}
	else if (choice == 3) {
		cout << "Result:" << multiply(a, b) << endl;
	}
	else if (choice == 4) {
		cout << "Result:" << divide(a, b) << endl;
	}
	else if (choice == 5) {
		cout << "Result:" << exponent(a, b) << endl;
	}
	else{
		cout << "Enter valid choice" << endl;
	}
	return 0;
}