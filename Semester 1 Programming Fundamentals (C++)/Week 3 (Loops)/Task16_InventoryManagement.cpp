#include <iostream>
using namespace std;

int main() {
	int ItemStock, QuanStock;
	float Val, PriceStock;
	Val = 0;
	cout << "Enter the number of different items in stock: ";
	cin >> ItemStock;
	for (int i = 1; i <= ItemStock; i++){
		cout << "Enter the price per unit for item " << i << ":";
		cin >> PriceStock;
		cout << "Enter the quantity of the item " << i << ":";
		cin >> QuanStock;
		Val = Val + (QuanStock * PriceStock);
	}
	cout << "The total Value for inventory is: " << Val << endl;
	system("Pause");
	return 0;
}
