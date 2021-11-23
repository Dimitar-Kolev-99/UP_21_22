#include <iostream>
#include <iomanip>
using namespace std;
int task1() {
	const int n = 3;
	int matrix[n][n]{};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	int scalar;
	cout << "Scalar: ";
	cin >> scalar;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << matrix[i][j] * scalar;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}