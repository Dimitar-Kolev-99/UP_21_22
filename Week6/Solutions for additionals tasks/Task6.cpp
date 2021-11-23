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

void printVector(vector<int> numbers) {
	int size = numbers.size();

	for (int i = 0; i < size; i++) {
		cout << numbers[i] << " ";
	}
}

vector<int> findNonNegativeNumbersInMatrix(vector<vector<int>> matrix) {
	int rows = matrix.size();

	if (rows == 0) {
		vector<int> empty;
		return empty;
	}

	vector<int> nonNegativeNumbers;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			if (i == j) {
				nonNegativeNumbers.push_back(matrix[i][j]);
			}
		}
	}

	return nonNegativeNumbers;
}

int main() {
	int rows;
	cout << "Rows: ";
	cin >> rows;

	vector<vector<int>> matrix = getMatrixFromInput(rows, rows);

	printVector(findNonNegativeNumbersInMatrix(matrix));

	cout << endl;

	system("pause");
	return 0;
}