#include <iostream>
#include <string>
using namespace std;
int task3v2() {
	const int HEIGHT = 5;
	const int NUMBER_OF_LETTERS = 5;
	const int WIDTH = HEIGHT * NUMBER_OF_LETTERS + 4;
	string letters[5] = {
		"H   H EEEEE L     L     OOOOO",
		"H   H E     L     L     O   O",
		"HHHHH EEEEE L     L     OOOOO",
		"H   H E     L     L     O   O",
		"H   H EEEEE LLLLL LLLLL OOOOO",
	};

	for (int i = 0; i < 80; i += 2) {
		for (int j = 0; j < HEIGHT; j++) {
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			for (int k = 0; k < WIDTH; k++) {
				cout << letters[j][k];
			}
			cout << endl;
		}
		system("cls");
	}


	system("pause");
	return 0;
}