#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int task4() {
	int rows, columns;
	cout << "Rows: ";
	cin >> rows;
	cout << "Columns: ";
	cin >> columns;
	vector<vector<int>> matrix(rows);
	int temp;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cin >> temp;
			matrix[i].push_back(temp);
		}
	}

	for (int i = 0; i < columns; i++) {
		for (int j = 0; j < rows; j++) {
			cout << setw(4) << matrix[j][i];
		}
		cout << endl;
	}

	system("pause");
	return 0;
}