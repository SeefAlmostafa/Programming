#include <algorithm>
#include <iostream>
#include <thread>
using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;
ull oddSum = 0;
ull evenSum = 0;

void findEven(ull start, ull end) {
    for (ull i = start; i <= end; i++) {
        if ((i & 1) == 0) {
            evenSum += i;
        }
    }
}

void findOdd(ull start, ull end) {
    for (ull i = start; i <= end; i++) {
        if ((i & 1) == 1) {
            oddSum += i;
        }
    }
}

int main() {
    ull start = 0, end = 1900000000;

    auto startTime = high_resolution_clock::now();

    findOdd(start, end);
    findEven(start, end);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout << "OddSum:" << oddSum << endl;
    cout << "EvenSum:" << evenSum << endl;
    cout << "duration:" << duration.count() / 1000000 << endl;
    system("pause");
    return 0;
}