#include <iostream>
using namespace std;
int task7() {
	int money;
	int singlePrice;
	cout << "Money: ";
	cin >> money;
	cout << "Single price: ";
	cin >> singlePrice;
	cout << "Coffies which we can buy: " << money / singlePrice << endl;
	cout << "Money left: " << money % singlePrice << endl;
	system("pause");
	return 0;
}