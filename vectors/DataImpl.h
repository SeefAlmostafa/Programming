
#include "Data.h"

const string msg = "\n(Exit/exit) are invalid names\n";

template <class D>
Data<D>::Data(int size) {
	chooseMode();
	if (mode == screen) {
		cout << "|| Screen Mode" << endl;
	}
	else {
		createFile();
		cout << "|| File Mode ";
		if (file.is_open()) {
			cout << " (file is opened)\n";
		}
		else {
			cout << " (file can not be opened)\n ";
		}
	}
	this->size = size;
}


template <class D>
Data<D>::~Data() {
	cout << "(file is closed)\n";
	this->closeFile();
}


template <class D>
void Data<D>::Data::printData() {
	if (mode == screen) {
		cout << "size:" << this->getSize() << endl;
		for (int i = 0; i < getSize(); i++) {
			cout << "|| " << i << "-" << data[i] << endl;
		}
	}
}

template <class D>
void Data<D>::Data::setSize() {
	int size;
	cout << "|| Enter a size:";
	cin >> size;
	if (!vaildSize()) {
		cout << "|| vector can not be created\n";
		exit(-1);
	}
	this->size = size;
}

template <class D>
int Data<D>::Data::getSize() {
	return this->size;
}

template <class D>
bool Data<D>::Data::vaildSize() {
	return this->getSize() > 0;
}

template <class D>
void Data<D>::Data::chooseMode() {
	int m = 0;
	cout << "|| Enter a print mode[1/2]:";
	cin >> m;
	if (m == 1) {
		mode = File;
	}
	else if (m == 2) {
		mode = screen;
	}
	else {
		cout << "|| invaild input\n";
		exit(-1);
	}
}

template <class D>
void Data<D>::Data::insert_data() {
	D temp;
	bool valid_data = true;
	setSize();
	cout << "|| insert into the list" << endl;
	do {
		if (data.size() < this->getSize()) {
			cout << "|| data:";
			cin >> temp;
			valid_data = (!exit_keys(temp));
			valid_data ? data.push_back(temp) : throw msg;
			if (mode == File) {
				file << temp << endl;
			}
			else {
				continue;
			}
		}
		else {
			cout << "\n|| vector is full\n";
			break;
		}
	} while (!exit_keys(temp));
}

template <class D>
bool Data<D>::Data::exit_keys(string& data) {
	return (data == "exit" || data == "Exit");
}

template <class D>
void Data<D>::Data::get_fname() {

	string name, format;

	cout << "|| Enter a file name:";
	cin >> name;

	cout << "|| Enter a format  [.txt / .docx]:";
	cin >> format;

	size_t n1 = name.size();
	size_t n2 = format.size();

	string finalName = name + format;

	if ((name == " " || format == " ") || (n1 == 0 || n2 == 0) || (!(format == ".txt" || format == ".docx"))) {
		finalName = "data.txt";
		cout << "|| something went wrong , the file name has replaced to 'data.txt'" << endl;
	}
	this->fileName = finalName;
}

template <class D>
void Data<D>::Data::createFile() {
	get_fname();
	file.open(fileName);
}

template <class D>
void Data<D>::Data::closeFile() {
	file.close();
}