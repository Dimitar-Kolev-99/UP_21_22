#include <iostream>
using namespace std;
int task1b() {
	double a;
	double b;
	cout << "Type the first side of the rectangle: ";
	cin >> a;
	cout << "Type the second side of the rectangle: ";
	cin >> b;
	double area = a * b;
	double perimeter = 2 * (a + b);
	cout << "The area is: " << area << endl;
	cout << "The perimeter is: " << perimeter << endl;
	system("pause");
	return 0;
}