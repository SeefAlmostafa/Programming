#pragma once
using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <fstream>


enum choise { File = 1, screen = 2 };

template <class D>
class Data {
private:
	vector<D> data;
	int size;
	choise mode;
	ofstream file;
	string fileName;
	bool allowedSize();

public:
	~Data();
	Data(int size = 10);
	void setSize();
	int getSize();
	void printData();
	void choiseMode();
	void get_fname();
	void insert_data();
	bool exit_keys(string& data);
	void createFile();
	void closeFile();
};
