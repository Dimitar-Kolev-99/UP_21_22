#include <iostream>
using namespace std;
int main() {
	//Да се напише програма, която получава 3 цифри и изписва на конзолата най-голямото число,
	// което може да се получи от тях. Помислете за някой специфичен вход.

	int firstDigit, secondDigit, thirdDigit;

	cout << "The first digit is: ";
	cin >> firstDigit;
	cout << "The second digit is: ";
	cin >> secondDigit;
	cout << "The third digit is: ";
	cin >> thirdDigit;

	if (firstDigit >= secondDigit && firstDigit >= thirdDigit) {
		cout << firstDigit;
		if (secondDigit >= thirdDigit) {
			cout << secondDigit << thirdDigit;
		}
		else {
			cout << thirdDigit << secondDigit;
		}
	}
	else if (secondDigit >= firstDigit && secondDigit >= thirdDigit) {
		cout << secondDigit;
		if (firstDigit >= thirdDigit) {
			cout << firstDigit << thirdDigit;
		}
		else {
			cout << thirdDigit << firstDigit;
		}
	}
	else if (thirdDigit >= secondDigit && thirdDigit >= secondDigit) {
		cout << thirdDigit;
		if (firstDigit >= secondDigit) {
			cout << firstDigit << secondDigit;
		}
		else {
			cout << secondDigit << firstDigit;
		}
	}

	cout << endl;
	system("pause");
	return 0;
}