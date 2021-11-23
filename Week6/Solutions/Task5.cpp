#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int task5() {
	const int N = 3;
	int matrix[N][N]{};
	srand(time(NULL));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
	int upperSum = 0, lowwerSum = 0;
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			upperSum += matrix[i][j];
		}
	}
	cout << endl;
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			lowwerSum += matrix[i][j];
		}
	}
	int difference = upperSum - lowwerSum;
	cout << "The difference is: " << difference << endl;

	system("pause");
	return 0;
}