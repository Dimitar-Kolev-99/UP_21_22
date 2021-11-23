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

bool areAllZeroesBasedOnPrimaryDiagonal(vector<vector<int>> matrix) {
	int rows = matrix.size();

	if (rows == 0) {
		return false;
	}

	bool areAllZeroesAboveTheDiagonal = true;
	bool areAllZeroesBelowTheDiagonal = true;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			if (j < i && matrix[i][j] != 0) {
				areAllZeroesBelowTheDiagonal = false;
			}
			if (j > i && matrix[i][j] != 0) {
				areAllZeroesAboveTheDiagonal = false;
			}
			if (areAllZeroesBelowTheDiagonal == false && areAllZeroesAboveTheDiagonal == false) {
				return false;
			}
		}
	}

	return areAllZeroesAboveTheDiagonal || areAllZeroesBelowTheDiagonal;
}

void printVector(vector<int> numbers) {
	int size = numbers.size();

	for (int i = 0; i < size; i++) {
		cout << numbers[i] << " ";
	}
}

int main() {
	int rows;
	cout << "Rows: ";
	cin >> rows;

	vector<vector<int>> matrix = getMatrixFromInput(rows, rows);

	cout << areAllZeroesBasedOnPrimaryDiagonal(matrix) << endl;

	system("pause");
	return 0;
}