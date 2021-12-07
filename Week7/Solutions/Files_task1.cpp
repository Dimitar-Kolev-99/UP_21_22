#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	string username;
	string password;
	string email;

	cout << "Username: ";
	cin >> username;
	cout << "Password: ";
	cin >> password;
	cout << "Email: ";
	cin >> email;

	bool isUsernameValid = username.length() >= 6;
	bool isPasswordValid = password.length() >= 6;
	bool isEmailValid = email.length() >= 6;

	if (isUsernameValid && isPasswordValid && isEmailValid) {
		ofstream output;
		output.open("users.dat", ios::app);
		output << username << " " << password << " " << email << endl;
		output.close();
		cout << "User is registered successfuly!" << endl;
	}
	else {
		cout << "Invalid data! All the fields must be at least 6 symbols long!" << endl;
	}

	system("pause");
	return 0;
}