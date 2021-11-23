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

bool isNegativeNumberInMatrix(vector<vector<int>> matrix) {
	int rows = matrix.size();

	if (rows == 0) {
		return false;
	}

	int columns = matrix[0].size();

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (matrix[i][j] < 0) {
				return true;
			}
		}
	}

	return false;
}

int main() {
	int rows, columns;
	cout << "Rows: ";
	cin >> rows;
	cout << "Columns: ";
	cin >> columns;

	vector<vector<int>> matrix = getMatrixFromInput(rows, columns);

	if (isNegativeNumberInMatrix(matrix)) {
		cout << "There is at least one negative number in the matrix." << endl;
	}
	else {
		cout << "There are no negative numbers in the matrix." << endl;
	}

	cout << endl;

	system("pause");
	return 0;
}