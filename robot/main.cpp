
using namespace std;
#include <iostream>
#include "PhysicianRobot.h"
#include <vector>

int main()
{

	string toOwner = "Seef";

	// Create some Bots
	Robot Bot("FacebookBot", 70);
	Robot helpBot("instagramBot", 5);
	Robot serverBot("TwitterBot");
	serverBot.set_health(49);
	

	// intrdoucing the Bots
	Bot.introduce();
	serverBot.introduce();

	// say_hi to the owner of serverBot
	serverBot.say_hi(toOwner);


	// Enter Bots Numbers
	double n1 = 0.0, n2 = 0.0;
	char op = ' ';
	
	try {
		double result = Bot.calculate(n1, n2, op);
		cout << "Bot Calculation is:" << result << endl;
	}
	catch (string& m) {
		cerr << m << endl;
	}
	
	// create Physician Robot 
	PhysicianRobot py_rp;
	py_rp.heal(serverBot);


	vector<Robot> other = { Bot,serverBot,helpBot };
	int i = 0;
	size_t length = other.size();

	while (length) {
		py_rp.heal(other[i]);
		cout << other[i].get_name() << " has " << other[i].get_health() << " health" << endl;
		length--;
		i++;
	}
	
	system("pause");
	
	return 0;
}

