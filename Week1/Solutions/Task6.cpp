#include <iostream>
using namespace std;
int task6() {
	int seconds;
	cout << "Seconds: ";
	cin >> seconds;
	int hours = (seconds / 3600);
	int minutes = (seconds / 60) % 60;
	seconds %= 60;
	if (hours < 10) cout << "0" << hours << ":";
	else cout << hours << ":";
	if (minutes < 10) cout << "0" << minutes << ":";
	else cout << minutes << ":";
	if (seconds < 10) cout << "0" << seconds << endl;
	else cout << seconds << endl;
	system("pause");
	return 0;
}