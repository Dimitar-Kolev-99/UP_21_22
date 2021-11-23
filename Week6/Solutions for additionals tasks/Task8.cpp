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

int findSumOfElementsWithIndexS(vector<vector<int>> matrix, int s) {
	int rows = matrix.size();
	int sum = 0;

	if (rows == 0) {
		return sum;
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			if (i + j == s) {
				sum += matrix[i][j];
			}
		}
	}

	return sum;
}

int main() {
	int rows, s;
	cout << "Rows: ";
	cin >> rows;
	cout << "S: ";
	cin >> s;

	vector<vector<int>> matrix = getMatrixFromInput(rows, rows);

	cout << "The sum is: " << findSumOfElementsWithIndexS(matrix, s) << endl;

	system("pause");
	return 0;
}