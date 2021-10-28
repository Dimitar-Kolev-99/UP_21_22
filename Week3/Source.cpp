#include <iostream>

using namespace std;

int main() {

	/*for (int i = 2; i <= 100; i += 2) {
		cout << i << endl;
	}*/

	/*int number;
	cout << "Number: ";
	cin >> number;

	number = abs(number);

	bool isPrimeNumber = true;

	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			isPrimeNumber = false;
			break;
		}
	}
	
	if (isPrimeNumber) {
		cout << "The number is prime" << endl;
	}
	else {
		cout << "The number is not prime" << endl;
	}*/

	/*cout << "Start hacking NASA" << endl;

	for (int i = 0; i <= 100; i++) {
		cout << "Progress " << i << "%" << endl;
		for (int i = 0; i<=50000000; i++) {}
	}

	cout << "NASA hacked completely!!!" << endl;*/

	/*srand(time(NULL));
	int randomNumber = rand() % 100 + 1;

	int number;

	cout << "Guess the number: ";
	cin >> number;

	while (true) {
		if (number == randomNumber) {
			break;
		}
		else if (number < randomNumber) {
			cout << "The number is larger." << endl;
		}
		else if (number > randomNumber) {
			cout << "The number is smaller." << endl;
		}

		cout << "Guess the number: ";
		cin >> number;
	}

	cout << "Good job!" << endl;*/

	/*int number;
	cout << "Number: ";
	cin >> number;

	unsigned long long int product = 1;

	for (int i = number; i >= 1; i--) {
		product *= i;
	}

	cout << product << endl;*/

	/*int firstNumber, secondNumber;

	cin >> firstNumber >> secondNumber;

	if (secondNumber < firstNumber) {
		for (int i = firstNumber - 1; i > secondNumber; i--) {
			cout << i << " ";
		}
	}
	else {
		for (int i = firstNumber + 1; i < secondNumber; i++) {
			cout << i << " ";
		}
	}

	cout << endl;*/

	/*int n;
	int firstElement = 0;
	int secondElement = 1;
	cin >> n;
	if (n == 0) {
		cout << firstElement << endl;
		system("pause");
		return 0;
	}
	else if (n == 1) {
		cout << secondElement << endl;
		system("pause");
		return 0;
	}

	int current;

	for (int i = 2; i <= n; i++) {
		current = firstElement + secondElement;
		firstElement = secondElement;
		secondElement = current;
	}

	cout << current << endl;*/

	/*int n;
	cin >> n;

	int numberCounter = 0;
	int perfectNumber = 0;
	int currentNumber = 0;

	while (numberCounter < n) {
		int sumOfDigits = 0;
		int number = currentNumber;

		while (number != 0) {
			sumOfDigits += number % 10;
			number /= 10;
		}

		if (sumOfDigits == 10) {
			perfectNumber = currentNumber;
			numberCounter++;
		}

		currentNumber++;

	}

	cout << perfectNumber << endl;*/

	/*const char SYMBOL = '*';

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << SYMBOL << " ";
		}
		cout << endl;
	}*/

	const char SYMBOL = '*';
	const char SPACE = ' ';

	int n;
	cin >> n;

	if (n % 2 == 0) {
		cout << "The number should be odd!" << endl;
		system("pause");
		return 0;
	}

	/*
	5
	*****
	 ***
	  *
	*/

	for (int i = 0; i < n / 2 + 1; i++) {

		for (int j = 0; j < i; j++) {
			cout << SPACE;
		}

		for (int j = 0; j < n - (2 * i); j++) {
			cout << SYMBOL;
		}

		cout << endl;
	}

	system("pause");
	return 0;
}