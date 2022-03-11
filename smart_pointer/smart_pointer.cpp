using namespace std;
#include <iostream>

class A {
   private:
   public:
    A() { cout << "Constructor of A" << endl; }
    ~A() { cout << "Destruktor of A" << endl; }

    int set_pow(int value) { return value * value; }
};

template <class T>
class SmartPtr {
   private:
    T* ptr;

   public:
    SmartPtr(T* ptr = nullptr) {
        cout << "Constructor of SmartPtr" << endl;
        this->ptr = ptr;
    }
    ~SmartPtr() {
        delete this->ptr;
        ptr = nullptr;
    }

    T& operator*() { return *ptr; }
    T* operator->() { return ptr; }
};

int main() {
    {
        SmartPtr<A> a(new A());
        int a_val = a->set_pow(10);
        cout << a_val << endl;
    }
    system("pause");
    return 0;
}