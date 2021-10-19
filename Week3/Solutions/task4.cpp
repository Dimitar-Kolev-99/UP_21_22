#include <iostream>
using namespace std;
int main() {

	// Да се напише програма, която получава 3 числа и
	// да определи дали може да съществува триъгълник с толкова големи страни.

	double firstSide, secondSide, thirdSide;
	cout << "First side: ";
	cin >> firstSide;
	cout << "Second side: ";
	cin >> secondSide;
	cout << "Thrird side: ";
	cin >> thirdSide;

	if (firstSide + secondSide > thirdSide && secondSide + thirdSide > firstSide && firstSide + thirdSide > secondSide) {
		cout << "All good" << endl;
	}
	else {
		cout << "Invalid sides" << endl;
	}

	if (firstSide > secondSide && firstSide > thirdSide) {
		if (firstSide * firstSide == (secondSide * secondSide) + (thirdSide * thirdSide)) {
			cout << "Pravoygylen triygylnik" << endl;
		}
	}
	else if (firstSide < secondSide && secondSide > thirdSide) {
		if (secondSide * secondSide == (firstSide * firstSide) + (thirdSide * thirdSide)) {
			cout << "Pravoygylen triygylnik" << endl;
		}
	}
	else if (firstSide < thirdSide && secondSide < thirdSide) {
		if (thirdSide * thirdSide == (firstSide * firstSide) + (secondSide * secondSide)) {
			cout << "Pravoygylen triygylnik" << endl;
		}
	}

	system("pause");
	return 0;
}