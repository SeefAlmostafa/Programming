using namespace std;
#include <cstring>
#include <iostream>

class Employee {
   private:
    char name[100];
    char position[100];
    double salary;

   public:
    Employee() {
        set_name("");
        set_position("");
        set_salary(0.0);
    }

    ~Employee() {}

    // some setters & getters
    inline void set_name(char* name) { strcpy(this->name, name); }
    inline void set_position(char* position) { strcpy(this->position, position); }
    inline void set_salary(double salary) { this->salary = salary; }
    inline const char* get_name() const { return this->name; }
    inline const char* get_position() const { return this->position; }
    inline double get_salary() const { return this->salary; }

    inline void printData() {
        cout << "Employee Name:\t\t" << get_name() << endl;
        cout << "Employee Position:\t" << get_position() << endl;
        cout << "Employee salary:\t" << get_salary() << endl;
        cout << "\n--------------------------------\n";
    }
};