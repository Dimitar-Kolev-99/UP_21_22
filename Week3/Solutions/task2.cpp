#include <iostream>
using namespace std;
int main() {
	// Напишете програма, която подканва
	// потребителят да въведе своята възраст и извежда дали е пълнолетен или не.
	int age;

	cout << "How old are you? ";
	cin >> age;

	if (age >= 18) {
		cout << "Old enough" << endl;
	}
	else if (age < 18) {
		cout << "Not old enough" << endl;
	}
	system("pause");
	return 0;
}