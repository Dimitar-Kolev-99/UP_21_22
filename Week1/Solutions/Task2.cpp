#include <iostream>
using namespace std;
int task2() {
	int a;
	int b;
	cout << "First number: ";
	cin >> a;
	cout << "Second number: ";
	cin >> b;
	int c = a;
	a = b;
	b = c;
	cout << "The first number is: " << a << endl;
	cout << "The second number is: " << b << endl;
	system("pause");
	return 0;
}