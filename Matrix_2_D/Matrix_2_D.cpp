
using namespace std;
#include <iostream>
#define n 3

void printMatrix(int (&matrix)[n][n]);

int main()
{
	int matrix[n][n] = { 1,2,3,4,5,6,7,8,9 };
	printMatrix(matrix);
	return 0;
}

void printMatrix(int (&matrix)[n][n]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j]<<"\t";
		}
		cout << endl << endl << endl;
	}
}