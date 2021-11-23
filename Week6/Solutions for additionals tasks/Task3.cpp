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

vector<int> findSumPerRow(vector<vector<int>> matrix) {
	unsigned int rows = matrix.size();

	if (rows == 0) {
		vector<int> empty;
		return empty;
	}

	unsigned int columns = matrix[0].size();
	vector<int> sumPerRow(rows, 0);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			sumPerRow[i]+= matrix[i][j];
		}
	}

	return sumPerRow;
}

int main() {
	int rows, columns;
	cout << "Rows: ";
	cin >> rows;
	cout << "Columns: ";
	cin >> columns;

	vector<vector<int>> matrix = getMatrixFromInput(rows, columns);
	vector<int> sumPerRow = findSumPerRow(matrix);

	printVector(sumPerRow);

	cout << endl;

	system("pause");
	return 0;
}