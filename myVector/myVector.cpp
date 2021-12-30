
using namespace std;
#include <iostream>


class myVector {
private:
    int* arr;
    int len = 100;
public:
    myVector(int len, int defalut_value = 0) {
        this->len = len;
        this->arr = new int[len];
        for (int i = 0; i < len; i++) {
            this->arr[i] = defalut_value;
        }
    }
    myVector():myVector(len = 10) {}

    myVector(const myVector& other) {
        len = other.len;
        this->arr = new int[len];

        for (int i = 0; i < len; ++i)
            arr[i] = other.arr[i];
    }

    ~myVector() {
        delete[] arr;
    }

    void insert(int pos,int number) {
        if (pos < 0 || pos > len) {
            cerr << "Invalid access !" << endl;
            return;
        }
        arr[pos] = number;
    }

    int at(int pos ) {
        if (pos < 0 || pos > len) {
            cerr << "Invalid access !" << endl;
            return -1;
        }
        return arr[pos];
    }

    int& size() {
        return len;
    }

    void print() {
        for (int i = 0; i < size(); i++) {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
};

int main(){

    myVector v;
  
    v.insert(0, 1);
    v.insert(1, 2);
    v.insert(2, 3);
    v.insert(3, 4);
    v.insert(4, 5);

   cout << v.size() << endl;

    v.print();

    cout << "vector[4]:" << v.at(4) << endl;

    return 0;
    
}


