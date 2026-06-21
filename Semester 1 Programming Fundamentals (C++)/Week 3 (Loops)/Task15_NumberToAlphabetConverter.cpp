#include <iostream> 
using namespace std;
int main() {
	cout << "Uppercase Letters (A-Z) with ASCII values:\n";
	for (char ch = 'A'; ch <= 'Z'; ++ch) {
		cout << ch << " : " << int(ch) << endl;
	}
	cout << "Lowercase Letters (a-z) with ASCII values:\n";
	for (char ch = 'a'; ch <= 'z'; ++ch) {
		cout << ch << " : " << int(ch) << endl;
	}
	system("pause");
	return 0;
}
