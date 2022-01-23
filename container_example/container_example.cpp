
using namespace std;
#include <iostream>

class car {
private:
    static int ID;
    int serial;
    int model;
public:
    car():car(0){}
    car(int model):model(model){
        serial = ++ID;
    }
    inline int get_serial() const{ return serial; }
    inline int get_model()const {return model;}
    void print() {
        cout << "Car " << get_serial() << "\tmodel: " << get_model() << endl;
    }
};

int car::ID = 0;

class storeCars {
private:
    car** storage; // list of cars
    int next;
    int size;
    int capacity;
    int current;

    void destroy() {
        for (auto currentCar = get_first(); currentCar != get_end();) {
            delete currentCar;
            currentCar = get_next();
        }
    }
    void copy(const storeCars& other) {
        this->size = other.size;
        this->capacity = other.capacity;
        this->current = other.current;
        for (int i = 0; i < other.size; i++)
            storage[i] = new car(*other.storage[i]); // practice
    }
public:
    storeCars(int capacity = 10) {
        this->capacity = capacity;
        this->size = 0;
        this->next = 0;
        this->current = -1;
       storage = (new car*); // practice
    }
    storeCars( const storeCars& other) {
        copy(other);
    }
    storeCars operator=(const storeCars& other) {
        if (this != &other) {
            destroy();
            copy(other);
        }
        return *this;
    }

    ~storeCars() {
        destroy();
    }

    int get_current()const {
        return current;
    }

    void add_car(const car& newCar) {
        current++;
        storage[current] =  new car(newCar); // practice
        size++;
       
    }

    car* get_first() const {
        return this->storage[0];
    }

    car* get_next() {
        return this->storage[++next];  // without const !
    }


    car* get_end() const {
        return this->storage[size];
    }

    int Size() {
        return size;
    }

    int Capacity() {
        return capacity;
    }


    void showAllCarsInfo() {
        for (int i = 0; i < size; i++) {
            storage[i]->print();
        }
    }
};

int main(){
    car car1(145), car2(433), car3(474);
    storeCars garage;

    garage.add_car(car1);
    garage.add_car(car2);
    garage.add_car(car3);

    garage.showAllCarsInfo();

    return 0;

}


