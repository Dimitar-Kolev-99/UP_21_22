#include <iostream>
using namespace std;
int main() {
	// �� �� ������ ��������, ����� �������� ����� � ��������� 0-10 � �������
	// �� ��������� �������� �������� ��� ������� �� �����.

	int number;
	cout << "The number is: ";
	cin >> number;

	if (number > 10 || number < 0) {
		cout << -1 << endl;
		system("pause");
		return 0;
	}

	switch (number)
	{
	case 0:
		cout << "ZERO" << endl;
		break;
	case 1:
		cout << "ONE" << endl;
		break;
	case 2:
		cout << "TWO" << endl;
		break;
	case 3:
		cout << "THREE" << endl;
		break;
	case 4:
		cout << "FOUR" << endl;
		break;
	case 5:
		cout << "FIVE" << endl;
		break;
	case 6:
		cout << "SIX" << endl;
		break;
	case 7:
		cout << "SEVEN" << endl;
		break;
	case 8:
		cout << "EIGHT" << endl;
		break;
	case 9:
		cout << "NINE" << endl;
		break;
	case 10:
		cout << "TEN" << endl;
		break;
	default:
		cout << "The number was invalid" << endl;
		break;
	}

	system("pause");
	return 0;
}