#include <iostream>
#include <string>

bool isPalindrome(std::string text) {
	int size = text.size();
	int halfSize = text.size() / 2;

	for (int i = 0; i < halfSize; i++) {
		if (text[i] != text[size - i - 1]) {
			return false;
		}
	}

	return true;
}