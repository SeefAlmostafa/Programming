using namespace std;
#include <iomanip>
#include <iostream>

int main() {
    int x;
    cin >> x;
    cout << x / 3600;
    x = x % 3600;

    cout << ":" << x / 60 << ":";
    x = x % 60;

    cout << x / 1;

    return 0;
}