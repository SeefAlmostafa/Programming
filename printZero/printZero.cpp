using namespace std;
#include <iostream>
#include <string>

void printNumbers(unsigned int number) {
	// Notice: Using unsigned int = (No negative Numbers)
	for (unsigned int i = 1; i <= number; i++) {
		string i_string = to_string(i);
		if (i < 10) {
			string zeroBefore = "0" + i_string;
			cout << zeroBefore << endl;
		}
		else
			cout << i_string << endl;
	}
}

int main() {

	printNumbers(20);

	return 0;
}


