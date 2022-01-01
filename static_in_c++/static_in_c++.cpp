#include <string>
#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	static int employee_count;
public:
	Employee(string name):name(name){
		++Employee::employee_count;
	}
	static int getEmployeeCount() {
		return Employee::employee_count;
	}

};

int Employee::employee_count = 0;

int main(){
	Employee e1("seef");
	//Employee("mona");
	static Employee ahmed("ahmed");

	cout << Employee::getEmployeeCount();

	return 0;

}

