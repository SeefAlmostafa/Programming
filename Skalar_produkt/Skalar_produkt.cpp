
using namespace std;
#include <iostream>
#include <vector>

void printArray(vector<double>&, int);
double arithMean(vector<double>&, int);
double skalarProdukt(vector<double>&, vector<double>&, int);


int main() {

	int n = 0;
	double arithMittel = 0.0;

	vector <double> vector1 = { 1.0, 2.0, -3.0, 1.5 };
	vector <double> vector2 = { -1.5, 3.0, 2.0, 1.0 };

	n = vector1.size();
	cout << "V1: ";
	printArray(vector1, n);

	n = vector2.size();
	cout << "V2: ";
	printArray(vector2, n);
	cout << "\n";

	arithMittel = arithMean(vector1, n);
	cout << "Arithmetische Mittel von Vector 1 ist: " << arithMittel << endl;

	arithMittel = arithMean(vector2, n);
	cout << "Arithmetische Mittel von Vector 2 ist: " << arithMittel << endl;
	cout << "\n";

	double skalarProd = skalarProdukt(vector1, vector2, n);
	cout << "Das Skalarprodukt der beiden Vektoren lautet:" << skalarProd << endl;
	
	system("pause");
	return 0;
}

void printArray(vector<double>& vec, int n) {

	for (int i = 0; i < n; i++) {
		cout << vec[i] << "     \t";
	}
	cout << "\n";
}

double arithMean(vector<double>& vec, int n) {
	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		sum += vec[i] / n;
	}
	return sum;
}

double skalarProdukt(vector<double>& vec1, vector<double>& vec2, int n) {
	double skalarProd = 0.0;
	for (int i = 0; i < n; i++) {
		skalarProd += (vec1[i] * vec2[i]);
	}
	return skalarProd;
}