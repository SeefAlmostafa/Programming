
using namespace std;
#include <iostream>
#include <string>


int prefixIdentification(string str1, string str2);
int prefixIdentification(string str1, string str2){

	int len1 = 0, len2 = 0, len = 0, i = 0, prefixId = 0;

	len1 = str1.size();  //Bestimmung der Laenge der 1. Zeichenkette
	len2 = str2.size();  //Bestimmung der Laenge der 2. Zeichenkette

	len = len1;

	if (len1 < len2) {
		len = len1;
		prefixId = 1;
	}

	if (len2 < len1) {
		len = len2;
		prefixId = 2;
	}

	while (i < len) {
		if (str1[i] != str2[i])
			prefixId = -1;
		i++;
	}

	return prefixId;
}

int main() {


	string str1;
	string str2;
	
	cout << "Enter str1:";
	cin >> str1;
	cout << "Enter str2:";
	cin >> str2;
	

	int ans = prefixIdentification(str1, str2);

	cout << "result:" << ans << endl;

	system("pause");
	return 0;

	/*
	
	Test case 1
	Enter str1:Test
	Enter str2:Test
	result:0
	_______________
	Test case 2
	Enter str1:Test
	Enter str2:Tes
	result:2
	_______________
	Test case 3
	Enter str1:Tes
	Enter str2:Test
	result:1
	_______________
	Test case 4
	Enter str1:Test
	Enter str2:seef
	result:-1
	_______________
	Enter str1:""
	Enter str2:""
	result:0

	*/
}