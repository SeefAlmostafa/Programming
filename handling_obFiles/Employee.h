using namespace std;
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class Employee {
   private:
    string name;
    string position;
    double salary;

   public:
    Employee(string name = "", string position = "", double salary = 0.0) {
        set_name(name);
        set_position(position);
        set_salary(salary);
    }

    // some setters & getters
    void set_name(string name) { this->name = name; }
    void set_position(string position) { this->position = position; }
    void set_salary(double salary) { this->salary = salary; }

    string get_name() const { return this->name; }
    string get_position() const { return this->position; }
    double get_salary() const { return this->salary; }

    void printData() {
        cout << "Employee Name: " << get_name() << endl;
        cout << "Employee Position: " << get_position() << endl;
        cout << "Employee salary: " << get_salary() << endl;
        cout << "\n----------------------\n";
    }
};