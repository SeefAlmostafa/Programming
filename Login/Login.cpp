
#include <iostream>
#include <string>
using namespace std;


void Login(string* Username, string* password);
bool checkLogin(string myUsername, string myPassword);

bool checkLogin(string myUsername, string myPassword) {
	bool eingabe = myUsername == "saiflam" && myPassword == "12345";
	if (eingabe == true)
		return true;
	else
		return false;
}

void Login(string* username, string* password) {
	cout << "Enter your Username:";
	cin >> *username;
	cout << "Enter your Password:";
	cin >> *password;
}

int main()
{
	string username;
	string password;
	do {
		Login(&username, &password);
	} while (!checkLogin(username, password));

	cout << "Login efolgreich" << endl;

	system("pause");
	return 0;
}
