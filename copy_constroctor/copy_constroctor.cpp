using namespace std;
#include <iostream>

class Mynumber {
   private:
    int* val1;
    int val2;

   public:
    Mynumber(int x = 3, int y = 5) {
        val1 = new int;
        *val1 = x;
        val2 = y;
    }

    ~Mynumber() {
        delete val1;
        val1 = nullptr;
    }

    Mynumber(const Mynumber& other) {
        cout << "Copy Constructor called" << endl;
        val1 = new int;
        *val1 = *other.val1;
        val2 = other.val2;
    }

    void printValuesAndAddress() {
        cout << "val1:" << *val1 << " " << val1 << endl;
        cout << "val2:" << val2 << " " << &val2 << endl
             << endl;
    }
};

int main() {
    Mynumber a;
    Mynumber b(a);
    cout << "\n";
    a.printValuesAndAddress();
    b.printValuesAndAddress();

    return 0;
}

/*
    Copy Constructor called

    val1:3 0000017535E92170
    val2:5 0000004C938FFA90

    val1:3 0000017535E85480
    val2:5 0000004C938FFAC0
*/