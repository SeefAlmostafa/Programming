
using namespace std;

#include <iostream>
#include <deque>

/*
	emplace_back(value)
	push_back(begin,end)
	erase()
	deq.resize(value)
	deq.shrink_to_fit()
	clear()
	swap()
	it = insert(it,value)
*/

void print(deque <char>& d);
void print(deque <char>& d) {
	for (auto it = d.begin(); it < d.end(); it++) { cout << *it << "  "; }
	cout << "\n";
}

int main() {

	deque <char> d = { 'c','i','k',
					   'z','h','g',
					   'i','e','n',
					   'P','r','o','g','r','a','m','m','e'
	};

	d.emplace_back('r'); // enter r to the deque || emplace_back() is faster than push_back()
	//d.push_back('r');

	d.erase(d.begin(), d.end() - 10);
	print(d);

	// Enter here {'I','c','h','b','i','n','e','i','n'}
	for (auto it = d.begin(); it < d.begin() + 9; ++it) {
		char letter;
		cout << "enter letter:";
		cin >> letter;
		it = d.insert(it, letter);
	}
	print(d); // result: {'I','c','h','b','i','n','e','i','n','P','r','o','g','r','a','m','m','e','r'}

	deque <int> one = { 1,1,1,1,1,1,1,1,1,1,1 };
	deque <int> two = { 2,2,2,2,2,2,2,2,2,2,2 };

	one.swap(two); // swap one with two 

	cout << "one:";  for (auto itr : one) { cout << itr << " "; } cout << "\n"; // one:2 2 2 2 2 2 2 2 2 2 2
	cout << "two:";  for (auto itr : two) { cout << itr << " "; } cout << "\n"; // two:1 1 1 1 1 1 1 1 1 1 1

	deque <int> deq = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,
				   15,16,17,18,19,20,21,22,23,24,25 }; // note a deque needs a ';'

	deq.resize(30);
	deq.shrink_to_fit();

	// output: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 0 0 0 0 0
	// the size will be increased
	for (auto itr : deq) { cout << itr << " "; }

	deq.clear();
	one.clear();
	two.clear();
	d.clear();

}