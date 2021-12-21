#include <iostream>

using namespace std;

int task2(int n) {
	if (n <= 0) {
		return 0;
	}

	return task2(n - 1) + n;
}

int task3(int firstNumber, int secondNumber, int divisor) {
	if (firstNumber % divisor == 0 && secondNumber % divisor == 0) {
		return divisor;
	}

	return task3(firstNumber, secondNumber, divisor - 1);
}

double task4(double x, int n) {
	if (n == 1) {
		return x;
	}

	return task4(x, n - 1) * x;
}

void task6(int number) {
	if (number == 0) {
		return;
	}

	cout << number % 10;
	task6(number / 10);
}

int task7(int number) {
	if (number <= 0) {
		return 0;
	}

	return task7(number / 10) + number % 10;
}

int task8(int number) {
	if (number / 10 == 0) {
		return number;
	}

	return task8(number / 10) * (number % 10);
}

int task9(int number, int count) {
	if (number / 10 == 0) {
		return ++count;
	}

	return task9(number / 10, count + 1);
}

bool task10(int number, int k) {
	if (number / 10 == 0) {
		return number == k;
	}

	return number % 10 == k ? true : task10(number / 10, k);
}

bool task11(int k, int numbers[], int index) {
	if (index < 0) {
		return false;
	}

	if (numbers[index] == k) {
		return true;
	}

	return task11(k, numbers, index - 1);
}

bool task12(int numbers[], int index) {
	if (index <= 0) {
		return true;
	}

	if (numbers[index] < numbers[index - 1]) {
		return false;
	}

	return task12(numbers, index - 1);
}

int main() {
	int numbers[] = { 5, 9, 5, 12 };
	cout << task12(numbers, 3);
	cout << endl;

	system("pause");
	return 0;
}