using namespace std;
#include <iostream>

void draw(int n) {
	if (n < 0) {
		return;
	}
	draw(n - 1);

	for (int i = 0; i < n; i++) {
		cout << "*";
	}
	cout << "\n";
}

int main(){
	draw(10);
	return 0;
}
