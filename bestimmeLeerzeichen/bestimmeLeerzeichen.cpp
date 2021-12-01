
using namespace std;
#include <iostream>

int bestimmeLeerzeichen(char*,int);


int main()
{
	char test[] = " M e h r f a c h b e d i n g u n g s u e b e r d e c k u n g s t e s t ";

	int len = sizeof(test) / sizeof(test[0]);

	int counter = bestimmeLeerzeichen(test,len);
	cout << "Leerzeichen anzahl:" << counter << endl;

	system("pause");
	return 0;
}

int bestimmeLeerzeichen(char* str, int len) {
	int counter = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] == ' ')
			counter++;
	}
	return counter;
}