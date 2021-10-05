#include <iostream>
using namespace std;
int task5() {
	const double PI = 3.14;
	double radius;
	double height;
	cout << "Radius: ";
	cin >> radius;
	cout << "Height: ";
	cin >> height;
	double volume = PI * height * radius * radius;
	double surface = PI * radius * radius;
	double roundSur = 2 * PI * radius * height;
	double surface1 = 2 * surface + roundSur;
	cout << "V: " << volume << endl;
	cout << "S: " << surface << endl;
	cout << "B: " << roundSur << endl;
	cout << "S1: " << surface1 << endl;
	system("pause");
	return 0;
}