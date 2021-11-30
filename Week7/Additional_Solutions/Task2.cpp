#include <iostream>
#include <string>
#include <vector>

int findNumberOfSigns(std::string text) {
	int count = 0;
	int size = text.size();

	for (int i = 0; i < size; i++) {
		if (text[i] == '!' || text[i] == '?' || text[i] == ',') {
			count++;
		}
	}

	return count;
}

std::vector<int> findNumberOfSigns_v2(std::string text) {
	const int numberOfSigns = 3;
	std::vector<int> signs(numberOfSigns, 0);
	char signsToCheck[numberOfSigns] = { '!', '?', ',' };
	int size = text.size();

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < numberOfSigns; j++) {
			if (signsToCheck[j] == text[i]) {
				signs[j]++;
			}
		}
	}

	return signs;
}