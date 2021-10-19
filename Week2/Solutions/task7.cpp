#include <iostream>
using namespace std;
int main() {
	char operation;
	double firstNumber, secondNumber;
	cin >> firstNumber >> operation >> secondNumber;
	double result;

	if (operation == '+') {
		result = firstNumber + secondNumber;
	}
	else if (operation == '-') {
		result = firstNumber - secondNumber;
	}
	else if (operation == '*') {
		result = firstNumber * secondNumber;
	}
	else if (operation == '/' && secondNumber != 0) {
		result = firstNumber / secondNumber;
	}
	else {
		cout << "Invalid data" << endl;
		system("pause");
		return -1;
	}
	cout << firstNumber << " " << operation << " " << secondNumber << " = " << result << endl;
	system("pause");
	return 0;
}