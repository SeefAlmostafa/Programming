
using namespace std;
#include <iostream>
#include <vector>
#include <cstdlib>

int abs_max(vector <float> vec, int n);
int abs_max(vector <float> vec, int n) {

	int i = 0, maxIndex = 0;
	float xabs = 0.0f, Max = 0.0f;

	if (n <= 0)
		maxIndex = -1;

	else {
		maxIndex = 0;
		i = 1;

		if (vec[0] < 0) {
			Max = -vec[0];
		}
		else {
			Max = vec[0];
		}
		while (i < n) {
			xabs = vec[i];
			if (vec[i] < 0) {
				xabs = -vec[i];
			}
			else {
				xabs = vec[i];
			}
			if (xabs > Max) {
				Max = xabs;
				maxIndex = i;
			}
			i++;
		}
	}
	return maxIndex;
}

int main()
{
	vector <float> vec = { 1,2,3,-5,-10 };
	int n = vec.size();
	int maxIndex = abs_max(vec, n);

	cout << "max number has the position:" << maxIndex << " and it is: " << abs(vec[maxIndex]) << endl;

	system("pause");
	return 0;
}

