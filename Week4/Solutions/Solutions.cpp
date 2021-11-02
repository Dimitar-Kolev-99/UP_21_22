#include <iostream>
#include <cmath>
#include "Solutions.h"

int sum(const int a, const int b)
{
	return a + b;
}

bool isEven(const int a)
{
	return a % 2 == 0;
}

int min(int a, int b)
{
	return a > b ? b : a;
}

int abs(int number)
{
	return number < 0 ? -number : number;
}

unsigned long long int factoriel(int number) {
	return number <= 1 ? 1 : number * factoriel(number - 1);
}

int truncate(const double number)
{
	return (int) number;
}

int ascii(const char symbol)
{
	return symbol;
}

long long pow(const int number, unsigned N)
{
	long long product = 1;

	for (int i = 0; i < N; i++) {
		product *= number;
	}

	return product;
}

int askUser(const int from, const int to)
{
	int number;
	std::cout << "Enter number: ";
	std::cin >> number;

	while (number < from || number > to) {
		std::cout << "Enter number: ";
		std::cin >> number;
	}

	return number;
}

void printRepeatedDigits(const int from, const int to)
{
	if (from >= to) {
		return;
	}

	for (int i = from; i <= to; i++) {
		if (hasRepeatingDigits(i)) {
			std::cout << i << " ";
		}
	}

	std::cout << std::endl;
}

bool hasRepeatingDigits(int number) {
	if (number <= 10) {
		return false;
	}

	int previousDigit = number % 10;
	int currentDigit = -1;
	number /= 10;

	while (number != 0) {
		currentDigit = number % 10;
		number /= 10;

		if (currentDigit == previousDigit) {
			return true;
		}

		previousDigit = currentDigit;
	}

	return false;
}

void printNumbersWithHigherAverage(int m, int n, int k)
{
	if (m < 0 || n < 0 || m >= n) {
		return;
	}

	for (int i = m; i <= n; i++) {
		int average = calcualteAverageFromNumbersDigits(i);
		if (average >= k) {
			std::cout << i << " ";
		}
	}

	std::cout << std::endl;
}

int calcualteAverageFromNumbersDigits(int number)
{
	if (number <= 0) {
		return 0;
	}

	int sum = 0;
	int counter = 0;

	while (number != 0) {
		sum += number % 10;
		number /= 10;
		counter++;
	}

	return sum / counter;
}

bool isInInterval(int x, int y)
{
	return x <= 6 && x >= -6 && y <= 6 && y >= -6;
}

double calculateDistanceBetweenPoints(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}



