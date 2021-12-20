using namespace std;
#include <iostream>
#include <string>

class printer {
	string name;
	const int capacity;
	int availablePaper;
public:
	printer(string name, int availablePaper) :capacity(50) { // ok
		this->name = name;
		this->availablePaper = availablePaper;
		// capacity = 50; // wrong, the variable is const !
	}

	void set_Paper(int NumberOfPaper) {
		int maxPaper = capacity - availablePaper;
		if (NumberOfPaper <= maxPaper)
			availablePaper += NumberOfPaper;
		
		else  throw "Printer is full";
	}

	void print(string txtDoc) {
		int requiredPaper = txtDoc.length() / 10; // 40 / 10 = 4 pages
		if (requiredPaper > availablePaper) {
			throw "The Printer run out of Paper";
		}
		cout << "printing..." << txtDoc << endl;
		availablePaper -= requiredPaper;
	}
};

int main() {
	printer myPrinter("Pc_Druecker", 50);

	try {
		myPrinter.print("This is a c++ topic  about Exception handling");
		myPrinter.print("Hello i am Seef Almostafa");
		myPrinter.print("i study Medieninformatik");
		myPrinter.print("and i like to code sometimes");
		myPrinter.print("but today i am so sleepy");
		myPrinter.print("so i am thinking to give it a clean nap");
		myPrinter.print("but before that let me tell you what is Exception handling");
		myPrinter.print("sometimes we may run into some exceptions which means");
		myPrinter.print("having an non-expected output based on wrong inputs");
		myPrinter.print("exception contain try,throw,catch commands");
		myPrinter.print("so you can try anything that has an input and could have mistakes");
		myPrinter.print("then you throw possible mistakes if found");
		myPrinter.print("and finally you catch these mistakes and print them on the screen");
		// here we run into an exception that tells us..
		// exception: The Printer run out of Paper
		// in order to print the last line, i would give my printer few new papers
		myPrinter.set_Paper(10); // (hide,unhide) this line to see what it does !
		myPrinter.print("hope you understood, goodbye man!");
	}

	// only for strings
	catch (const char* txt) {
		cout << "exception: " << txt << endl;
	}

	// default for any type of an exception
	catch (...) {
		cout << "exception happened!" << endl;
	}

	system("pause");
	return 0;
}

