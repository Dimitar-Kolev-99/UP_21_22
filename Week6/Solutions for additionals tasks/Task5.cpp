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

bool isNumberContainedInMatrix(vector<vector<int>> matrix, int number) {
	int rows = matrix.size();

	if (rows == 0) {
		return false;
	}

	int columns = matrix[0].size();

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (matrix[i][j] == number) {
				return true;
			}
		}
	}

	return false;
}

int main() {
	int rows, columns, number;
	cout << "Rows: ";
	cin >> rows;
	cout << "Columns: ";
	cin >> columns;

	vector<vector<int>> matrix = getMatrixFromInput(rows, columns);

	cout << "The desired number is: ";
	cin >> number;

	if (isNumberContainedInMatrix(matrix, number)) {
		cout << "The number is in the matrix." << endl;
	}
	else {
		cout << "The number is not in the matrix." << endl;
	}

	system("pause");
	return 0;
}