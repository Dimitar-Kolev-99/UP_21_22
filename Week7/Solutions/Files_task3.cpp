#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

void readCountriesFromFile(vector<string>& countries, vector<string>& capitals, ifstream& input) {
	string temp;
	while (input.peek() > 0) {
		input >> temp;
		countries.push_back(temp);
		input >> temp;
		capitals.push_back(temp);
	}
}

int task3() {
	vector<string> countries;
	vector<string> capitals;
	srand(time(NULL));
	ifstream input;
	input.open("capitals.dat", ios::app);
	cout << "Loading countries...\n";
	readCountriesFromFile(countries, capitals, input);
	cout << "Loaded successfuly!\n";
	system("cls");

	int size = countries.size();
	int errors = 0;
	int points = 0;
	int random;
	string capital;
	while (true) {
		random = rand() % size;
		cout << "The capital of " << countries[random] << " is: ";
		cin >> capital;
		if (capitals[random] == capital) {
			cout << "Correct! Now you have " << ++points << " points!" << endl;
		}
		else {
			cout << "Wrong! Now you have made " << ++errors << " errors!" << endl;
		}
		system("pause");
		system("cls");
		if (points == 10) {
			cout << "You win!\n";
			break;
		}
		else if (errors == 3) {
			cout << "You lose!\n";
			break;
		}
	}

	system("pause");
	return 0;
}