#include <iostream>
#include <string>

using namespace std;

const string BEGIN = "begin";
const string END = "end";

string transformToLowercase(string text) {
	const int differenceBetweenLowercaseAndUpperCase = 'a' - 'A';

	for (int i = 0; i < text.size(); i++) {
		text[i] += differenceBetweenLowercaseAndUpperCase;
	}

	return text;
}

bool isLowercaseLetter(char letter) {
	return 'a' <= letter && letter <= 'z';
}

void excludeSmallLettersFromSecondString(string firstWord, string secondWord) {
	for (int i = 0; i < firstWord.size(); i++) {
		if (!isLowercaseLetter(firstWord[i])) {
			continue;
		}

		if (secondWord.find(firstWord[i]) == secondWord.npos) {
			cout << firstWord[i] << " ";
		}
	}

	cout << endl;
}

bool isUnique(string text) {
	string symbols = "";

	for (int i = 0; i < text.size(); i++) {
		if (symbols.find(text[i]) == symbols.npos) {
			symbols += text[i];
		}
		else {
			return false;
		}
	}

	return true;
}

int findNumberOfOccurences(string word, string toFind) {
	int count = 0;

	while (true) {
		unsigned int index = word.find(toFind);
		if (index == word.npos) {
			break;
		}

		count++;
		word = word.substr(index + toFind.size());
	}

	return count;
}

string getAllLowercaseLetterThatAreExcluded(string text) {

	char lowercaseLetters[26];
	int startAscii = 97;
	string result = "";

	for (int i = 0; i < 26; i++) {
		lowercaseLetters[i] = startAscii + i;
	}

	for (int i = 0; i < 26; i++) {
		if (text.find(lowercaseLetters[i]) == text.npos) {
			result += lowercaseLetters[i];
		}
	}

	return result;
}