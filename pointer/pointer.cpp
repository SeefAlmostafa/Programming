using namespace std;
#include <iostream>

int sum(int n) {
    if (n == 0) {
        return n;
    }
    return n + sum(n - 1);
}

int main() {
    int res = sum(5);
    cout << res << endl;
}
