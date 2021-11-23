#include <iostream>
#include <iomanip>
using namespace std;
int task3() {
	const int HEIGHT = 5;
	const int NUMBER_OF_LETTERS = 5;
	const int WIDTH = HEIGHT * NUMBER_OF_LETTERS + 4;
	char letters[HEIGHT][WIDTH] = {
		{'H',' ',' ',' ','H',' ','E','E','E','E','E',' ','L',' ',' ',' ',' ',' ','L',' ',' ',' ',' ',' ','O','O','O','O','O'},
		{'H',' ',' ',' ','H',' ','E',' ',' ',' ',' ',' ','L',' ',' ',' ',' ',' ','L',' ',' ',' ',' ',' ','O',' ',' ',' ','O'},
		{'H','H','H','H','H',' ','E','E','E','E','E',' ','L',' ',' ',' ',' ',' ','L',' ',' ',' ',' ',' ','O','O','O','O','O'},
		{'H',' ',' ',' ','H',' ','E',' ',' ',' ',' ',' ','L',' ',' ',' ',' ',' ','L',' ',' ',' ',' ',' ','O',' ',' ',' ','O'},
		{'H',' ',' ',' ','H',' ','E','E','E','E','E',' ','L','L','L','L','L',' ','L','L','L','L','L',' ','O','O','O','O','O'},
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