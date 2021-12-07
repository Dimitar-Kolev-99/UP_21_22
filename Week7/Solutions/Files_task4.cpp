#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void readCountriesFromFile(ifstream& input, vector<string>& countries, vector<string>& capitals, vector<int>& populations) {
	string temp;
	while (input.peek() > 0) {
		input >> temp;
		countries.push_back(temp);
		input >> temp;
		capitals.push_back(temp);
		input >> temp;
		int population = stoi(temp);
		populations.push_back(population);
	}
}

int findIndexForMaxPopulation(vector<int>& populations) {
	int maxPopulation = -1;
	int maxIndex = -1;
	int size = populations.size();

	for (int i = 0; i < size; i++) {
		if (populations[i] > maxPopulation) {
			maxPopulation = populations[i];
			maxIndex = i;
		}
	}

	return maxIndex;
}

int main() {

	vector<string> countries;
	vector<string> capitals;
	vector<int> populations;
	ifstream input;
	input.open("population.dat");
	cout << "Loading countries..." << endl;
	readCountriesFromFile(input, countries, capitals, populations);
	cout << "Countries loaded successfuly!\n";
	system("cls");
	int maxIndex = findIndexForMaxPopulation(populations);
	if (maxIndex == -1) {
		cout << "Something went wrong! Try again later!" << endl;
	}
	else {
		cout << "The country with the biggest population is " << countries[maxIndex]
			<< " and it's capital is " << capitals[maxIndex]
			<< " and the population is " << populations[maxIndex] << endl;
	}

	system("pause");
	return 0;
}
