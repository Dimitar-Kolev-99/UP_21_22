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

void printVector(vector<unsigned int> numbers) {
	int size = numbers.size();

	for (int i = 0; i < size; i++) {
		cout << numbers[i] << " ";
	}
}

vector<unsigned int> findAmountOfNegativeNumbersPerRow(vector<vector<int>> matrix) {
	unsigned int rows = matrix.size();

	if (rows == 0) {
		vector<unsigned int> empty;
		return empty;
	}

	unsigned int columns = matrix[0].size();
	vector<unsigned int> negativeNumbers(rows, 0);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (matrix[i][j] < 0) {
				negativeNumbers[i]++;
			}
		}
	}

	return negativeNumbers;
}

int main() {
	int rows, columns;
	cout << "Rows: ";
	cin >> rows;
	cout << "Columns: ";
	cin >> columns;

	vector<vector<int>> matrix = getMatrixFromInput(rows, columns);
	vector<unsigned int> negativeNumbers = findAmountOfNegativeNumbersPerRow(matrix);

	printVector(negativeNumbers);

	cout << endl;

	system("pause");
	return 0;
}