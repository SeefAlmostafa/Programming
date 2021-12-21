#pragma once
using namespace std;
#include <iostream>
#include <string>
class Video {
private:
	string name;
	int views;
public:
	string get_name();
	void watch();
	int get_views();
	Video(string name);
};