#include <iostream>
using namespace std;

int getLeastSignificantDigit(int n) {
    return n % 10;
}
int getMostSignificantDigit(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "Please enter a valid three-digit number." << endl;
        return 0;
    }
    cout << "Most Significant Digit: " << getMostSignificantDigit(num) << endl;
    cout << "Least Significant Digit: " << getLeastSignificantDigit(num) << endl;
    cout << "Sum of Digits: " << sumOfDigits(num) << endl;

    if (isPalindrome(num))
        cout << num << " is a Palindrome." << endl;
    else
        cout << num << " is not a Palindrome." << endl;

    return 0;
}