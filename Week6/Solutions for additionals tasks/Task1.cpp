#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> getMatrixFromInput(int rows, int columns) {
	vector<vector<int>> matrix(rows);

	int temp;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cin >> temp;
			matrix[i].push_back(temp);
		}
	}

	return matrix;
}

vector<int> findMinimalValuesPerRow(vector<vector<int>> matrix) {
	int rows = matrix.size();

	if (rows == 0) {
		vector<int> empty;
		return empty;
	}

	int columns = matrix[0].size();
	vector<int> minimalNumbers(rows, INT_MAX);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (matrix[i][j] < minimalNumbers[i]) {
				minimalNumbers[i] = matrix[i][j];
			}
		}
	}

	return minimalNumbers;
}

void printVector(vector<int> numbers) {
	int size = numbers.size();

	for (int i = 0; i < size; i++) {
		cout << numbers[i] << " ";
	}
}

int main() {
	int rows, columns;
	cout << "Rows: ";
	cin >> rows;
	cout << "Columns: ";
	cin >> columns;

	vector<vector<int>> matrix = getMatrixFromInput(rows, columns);
	vector<int> minimalNumbers = findMinimalValuesPerRow(matrix);

	printVector(minimalNumbers);

	cout << endl;

	system("pause");
	return 0;
}