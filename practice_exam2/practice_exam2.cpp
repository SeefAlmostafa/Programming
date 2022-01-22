#include <iostream>
using namespace std;
#include <string>


int main() {
	string text = "c++ is an easy language";
	string copyText = text; // copy constrctor

	string randomText;
	randomText = text; // assigning


	cout << "Orginialtxt:" << text << endl;
	cout << "copyed text:" << copyText << endl;
	cout << "random text:" << randomText << endl;


	//*** cheak some aggrgation functions ****

	// empity
	string empityText = "";
	if (empityText.empty()) 
		cout <<"Text is empity" << endl;
	else 
		cout << "Text is not empity" << endl;

	// append
	randomText.append(" and it is random");
	cout << randomText << endl;


	// find
	string findMe = "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS$SS";
	cout <<"position:" << findMe.find("$") << endl;


	// compare 
	string a = "ABCD", b = "ABCD";
	string result = a.compare(b) == 0 ? "Gleich" : "Ungleich";
	cout << result << endl;

	// Push,Pop
	a.push_back('E');
	cout << a << endl;
	a.pop_back();
	cout << a << endl;


	// data,max_size,size,length,capacity

	string module = "Programmierung";
	cout << module.data() << endl;
	cout << module.size() << endl;
	cout << module.capacity() << endl;
	cout << module.length() << endl;
	cout << module.max_size() << endl;

	return 0;
}

