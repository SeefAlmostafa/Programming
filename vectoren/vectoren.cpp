using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

bool greaterThanThree(int val) {
	return val > 3;
}

int main()
{
	vector <int> v = { 9,8,7,6,5,4,3,19 };
	/*
	//sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	
	for (auto it : v) {
		cout << it << "\t";
	}
	
	cout << "\nmin element:" << *min_element(v.begin(), v.end()) << endl;
	cout << "\nmax element:" << *max_element(v.begin(), v.end() << endl;
	// {19,3,4,5,6,7} after reverse
	cout << "\nmax element:" << *max_element(v.begin(), v.end()-2) << endl;

	cout<<"\n";


	*/
	/*
	sort(v.begin(), v.end());
	auto it = min_element(v.begin(), v.end(), greaterThanThree);
	

	for (; it != v.end() ; it++) {
		cout << *it << "\t";
	}
	*/

	vector <int> v2(4);
	int arr[] = { 1,2,3,4 };

	copy(arr, arr + 4, v2.begin());

	for (auto it : v2) {
		cout << it << "\t";
	}

	return 0;
}

