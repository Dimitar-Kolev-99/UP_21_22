#include <iostream>
#include <iomanip>
using namespace std;
int task2() {
	const int n = 3;
	const int m = 4;
	int matrix[n][m]{};
	int secondMatrix[m][n]{};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> secondMatrix[i][j];
		}
	}

	int multipliedMatrix[n][n]{};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				multipliedMatrix[i][j] +=
					matrix[i][k] * secondMatrix[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << multipliedMatrix[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}