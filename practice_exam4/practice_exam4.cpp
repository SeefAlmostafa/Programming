
using namespace std;
#include <iostream>

// Swap with template

template<class T>
inline void Swap(T& first, T& second) {
	T temp = first;
	first = second;
	second = temp;
}


// Bubble Sort template
template <class T>
void sort(T arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		int mini = i;
		for (int j = i + 1; j < len; j++)
			if (arr[j] < arr[mini])
				mini = j;
		Swap(arr[i], arr[mini]);
	}
}

template <class T>
void print(T& arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main(){
   
	int iArr[] = { 3, -1, 0, -4, 5, 22, -31 };
	double dArr[] = { 1.03, -22.4, 0.45, 3.14, .41 };

	int iLen = sizeof(iArr)/sizeof(iArr[0]);
	int dLen = sizeof(dArr) / sizeof(dArr[0]);;

	sort(iArr, iLen);
	sort(dArr, dLen);

	print(iArr, iLen);
	print(dArr, dLen);
	return 0;

}

