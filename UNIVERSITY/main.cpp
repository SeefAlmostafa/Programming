
#include "Univ.h"

int main() {
	ifstream input_f1("univ_1.txt");
	ifstream input_f2("univ_2.txt");
	ifstream input_f3("univ_3.txt");
	UNIVERSITY U1;
	UNIVERSITY U2;
	UNIVERSITY U3;
	input_f1 >> U1;
	input_f2 >> U2;
	input_f3 >> U3;
	{
		UNIVERSITY TEST1(U1);
		UNIVERSITY TEST2;
		TEST2 = TEST1;
		cout << TEST1 << endl;
		STUDENT* S = new STUDENT();
		strcpy(S->name, "testName");
		strcpy(S->address, "testAddress");
		S->gpa = 3.4;
		S->id = 121515;
		TEST2 = TEST2 + *S;
		cout << TEST2 << endl;
	}
	cout << U3 << endl;
	cout << "Average: " << U3.Rec_AVG() << endl;
	system("pause");
	return 0;
}