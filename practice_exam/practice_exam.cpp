#include <iostream>
using namespace std;

class Kid {

private:
	int serialNumber;
	static int currentKidNumber;
	static int max_number;

public:
	static int  get_currentKidNumber() { return currentKidNumber; }
	static int  get_max_number() { return max_number; }
	int get_SerialNr() const { return serialNumber; }

	Kid() :serialNumber(++max_number) {
		serialNumber < 0 ? serialNumber = 0 : serialNumber;
		++currentKidNumber;
		cout << "Kid " << get_SerialNr() << " is created" << endl;
	}

	~Kid() {
		if (currentKidNumber < 0) {
			cout << "Error delete was used too much" << endl;
			exit(-1);
		}
		--currentKidNumber;
		cout << "Kid " << get_SerialNr() << " is destroyed" << endl;
	}
};

int Kid::max_number = 0;
int Kid::currentKidNumber = 0;

void countinue() {
	cout << "\nClick to countinue...";
	cin.ignore();
	cout << "\n";
}

int main() {

	Kid Stackkids[20];					 // create kids on the stack
	countinue();

	Kid const* HeapKids = new Kid[30];	 // create kids on the heap
	countinue();

	// free all the kids in the heap
	cout << "=================================\n";
	cout << "Deleteing Kids from the heap" << endl;
	cout << "=================================\n";
	countinue();

	// start deleting
	cout << "Start" << endl;
	delete[] HeapKids;
	HeapKids = nullptr;
	cout << "Stop" << endl;
	countinue();

	// create a lonely kid on the heap :D
	Kid* savageKid = new Kid;
	countinue();

	// show status
	cout << "=======================================\n";
	cout << "Max created Kids so far in the Heap :" << Kid::get_max_number() << endl;
	cout << "Current Kids:" << Kid::get_currentKidNumber() << endl;
	cout << "=======================================\n";
	countinue();

	delete savageKid;
	savageKid = nullptr;
	countinue();

	// free all the kids on the stack
	cout << "=================================\n";
	cout << "Deleteing Kids from the stack" << endl;
	cout << "=================================\n";
	countinue();

	return 0;

}

