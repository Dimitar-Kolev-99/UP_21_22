#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void readUsersFromFile(ifstream& input, vector<string>& usernames, vector<string>& passwords, vector<string>& emails) {
	string temp;
	while (input.peek() > 0) {
		input >> temp;
		usernames.push_back(temp);
		input >> temp;
		passwords.push_back(temp);
		input >> temp;
		emails.push_back(temp);
	}
}

int findIndexByUsername(vector<string>& usernames, string username) {
	int size = usernames.size();
	for (int i = 0; i < size; i++) {
		if (usernames[i] == username) {
			return i;
		}
	}

	return -1;
}

int main() {

	vector<string> usernames;
	vector<string> passwords;
	vector<string> emails;

	string currentUsername;
	string currentPassword;

	ifstream input;
	input.open("users.dat");
	cout << "Loading users..." << endl;
	readUsersFromFile(input, usernames, passwords, emails);
	cout << "Users loaded!" << endl;
	system("cls");
	input.close();

	cout << "Username: ";
	cin >> currentUsername;
	cout << "Password: ";
	cin >> currentPassword;

	int index = findIndexByUsername(usernames, currentUsername);

	if (index == -1) {
		cout << "The username is incorrect!" << endl;
	}
	else if (currentPassword != passwords[index]) {
		cout << "The password is incorrect!" << endl;
	}
	else {
		cout << "You have logged successfuly!" << endl;
	}

	system("pause");
	return 0;
}