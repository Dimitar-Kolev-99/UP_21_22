#include <iostream>
using namespace std;
int main() {
	//Напишете програма, която приема две реални числа от конзолата и
	// изписва по - голямото от тях.
	double firstNumber, secondNumber;

	cout << "The first number is: ";
	cin >> firstNumber;
	cout << "The second number is: ";
	cin >> secondNumber;

	if (firstNumber > secondNumber) {
		cout << firstNumber << " > " << secondNumber << endl;
	}
	else if (firstNumber < secondNumber) {
		cout << firstNumber << " < " << secondNumber << endl;
	}
	else if (firstNumber == secondNumber) {
		cout << firstNumber << " = " << secondNumber << endl;
	}
	system("pause");
	return 0;
}