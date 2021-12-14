using namespace std;
#include <iostream>
#include <string>
#include <vector>

struct paar {
	string word;
	int count;
};

// globale variables
vector <paar> vect;

int& countWords(vector <paar>& vect, const string& str);
int& countWords(vector <paar>& vect, const string& str) {
	// cheak if the word exists ?
	for (unsigned int i = 0; i < vect.size(); i++) {
		if (vect[i].word == str) {
			return vect[i].count; 
		}
	}
	// otherwise
	paar new_word = { str, 0 }; // create new 
	vect.emplace_back(new_word); // push new word to the vector

	return vect[vect.size() - 1].count; // exp: aa. // count:2 
}

int main(){
	cout << "Bitte Zeichenfolgen eingeben, beenden mit '.':" << endl;
	string input;
	string stop = ".";

	// start reading and counting 
	while (cin >> input)
	{
		if (input.compare(stop) == 0) break; // terminate input
		else countWords(vect, input)++;
	}

	cin.ignore();

	cout << endl << "Haeufigkeiten der Woerter:" << endl;
	for (auto it = vect.begin(); it != vect.end();it++) {
		cout << it->word << "   " << it->count << "\n";
	}

	system("pause");
	return 0;
}
