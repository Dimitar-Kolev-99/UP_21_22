#include <iostream>
using namespace std;
int main() {
	int day, month, year;
	cout << "Days: ";
	cin >> day;
	cout << "Month: ";
	cin >> month;
	cout << "Year: ";
	cin >> year;

	if (day <= 0 || month <= 0 || year <= 0) {
		cout << "Invalid date" << endl;
		system("pause");
		return -1;
	}

	bool isLeapYear = (year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31) {
		if (day == 31 && month != 12) {
			day = 1;
			month++;
		}
		else if (day == 31 && month == 12) {
			day = 1;
			month = 1;
			year++;
		}
		else {
			day++;
		}
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30) {
		if (day == 30) {
			day = 1;
			month++;
		}
		else {
			day++;
		}
	}
	else if (month == 2 && isLeapYear && day <= 29) {
		if (day == 29) {
			month++;
			day = 1;
		}
		else {
			day++;
		}
	}
	else if (month == 2 && !isLeapYear && day <= 28) {
		if (day == 28) {
			month++;
			day = 1;
		}
		else {
			day++;
		}
	}
	else {
		cout << "Invalid date" << endl;
		system("pause");
		return -1;
	}

	cout << "The next date is: " << day << "." << month << "." << year << endl;

	system("pause");
	return 0;
}