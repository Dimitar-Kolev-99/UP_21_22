#include <iostream>
using namespace std;
int task4() {
	const double key = 2.54;
	double inches;
	cout << "Type the inches: ";
	cin >> inches;
	double cm = inches * key;
	cout << inches << " inch to cm is " << cm << endl;
	system("pause");
	return 0;
}