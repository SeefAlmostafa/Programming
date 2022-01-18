
#include <iostream>
using namespace std;
#include <string>

int main(){

	string s1 = "We are saying Hallo";
	string s2 = "Hallo";

	// cout << s1.append(s2) << endl;	// Hallo Welt Hallo
	// cout << s1.empty() << endl;		// 0

	cout << s1.find(s2) << endl; // 14 find the word and return its first letter position
}


