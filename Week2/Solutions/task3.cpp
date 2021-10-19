#include <iostream>
using namespace std;
int main() {
	// Напишете програма, която получава две числа от конзолата и връща
	// най - голямата възможна стойност от следните математически операции с тях :
	// събиране, изваждане, умножение или деление.

	double firstNumber;
	double secondNumber;

	cout << "The first number is: ";
	cin >> firstNumber;
	cout << "The second number is: ";
	cin >> secondNumber;

	double addition = firstNumber + secondNumber;
	double substraction;
	if (firstNumber >= 0 && secondNumber >= 0 && firstNumber >= secondNumber) {
		substraction = firstNumber - secondNumber;
	}
	else if (firstNumber >= 0 && secondNumber >= 0 && firstNumber < secondNumber) {
		substraction = secondNumber - firstNumber;
	}
	else if (firstNumber >= 0 && secondNumber < 0) {
		substraction = firstNumber - secondNumber;
	}
	else if (firstNumber < 0 && secondNumber >= 0) {
		substraction = secondNumber - firstNumber;
	}
	else if (firstNumber < 0 && secondNumber < 0 && firstNumber <= secondNumber) {
		substraction = secondNumber - firstNumber;
	}
	else if (firstNumber < 0 && secondNumber < 0 && firstNumber > secondNumber) {
		substraction = firstNumber - secondNumber;
	}

	double multiplication = firstNumber * secondNumber;
	double division;

	if (firstNumber >= secondNumber && secondNumber != 0) {
		division = firstNumber / secondNumber;
	}
	else if (secondNumber > firstNumber && firstNumber != 0) {
		division = secondNumber / firstNumber;
	}
	else {
		division = 0;
	}

	if (addition >= substraction && addition >= multiplication && addition >= division) {
		cout << "Addition: " << addition << endl;
	}
	else if (substraction >= addition && substraction >= multiplication && substraction >= division) {
		cout << "Substraction: " << substraction << endl;
	}
	else if (multiplication >= addition && multiplication >= substraction && multiplication >= division) {
		cout << "Multiplication: " << multiplication << endl;
	}
	else {
		cout << "Division: " << division << endl;
	}

	system("pause");
	return 0;
}