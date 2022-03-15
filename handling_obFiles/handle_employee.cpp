#include "Employee.h"

enum class options { ADD = 1,
                     VIEW = 2 };

#define EmployeePath "handling_obFiles/data/data.bin"

// some prototypes
vector<Employee*> readEmployees(string filePath);
void writeEmployees(Employee employee, string filePath);
void handle_employee();

// function to read employees from the file
vector<Employee*> readEmployees(string filePath) {
    vector<Employee*> employeeList;
    try {
        ifstream myFile(filePath, ios::in | ios::binary | ios::ate);
        streampos size = myFile.tellg();
        char* memBlock = new char[size];
        myFile.seekg(0, ios::beg);
        myFile.read(memBlock, size);
        myFile.close();

        long long byteIndex = 0;
        while (byteIndex < size) {
            Employee* employee = (Employee*)(memBlock + byteIndex);
            employeeList.push_back(employee);
            byteIndex += sizeof(Employee);
        }

    } catch (exception& e) {
        cout << "Standard exception: " << e.what() << endl;
    }
    return employeeList;
}

// function to write employees and store them into a file
void writeEmployees(Employee employee, string filePath) {
    try {
        ofstream myFile;
        myFile.open(filePath, ios::out | ios::app | ios::binary);
        myFile.write((char*)&employee, sizeof(employee));
        myFile.close();
        cout << "\nrecord is added to file\n\n";
    } catch (exception& e) {
        cout << "-> standard exception: " << e.what() << endl;
    }
}

void handle_employee() {
    string name = "", position = "";
    double salary = 0.0;
    int option;
    while (true) {
        cout << "(1).. Add new Record\n";
        cout << "(2).. View records\n";
        cout << "(3).. Hit Any other key to exit\n";
        cout << "\nPlease enter an option:";
        cin >> option;

        if (option == (int)options::ADD) {
            Employee employee;

            cout << "\nEnter name:";
            cin >> ws;  // first clean spaces
            getline(cin, name);
            cout << "Enter position:";
            getline(cin, position);
            cout << "Enter salary:";
            cin >> salary;

            employee.set_name(name);
            employee.set_position(position);
            employee.set_salary(salary);

            writeEmployees(employee, EmployeePath);
        }

        else if (option == (int)options::VIEW) {
            vector<Employee*> EmployeeFile = readEmployees(EmployeePath);
            cout << "\n----File Content------\n";
            for (auto line = EmployeeFile.begin(); line != EmployeeFile.end(); line++) {
                Employee* employee = *line;
                employee->printData();
            }
            cout << "\n";
        }

        else {
            break;
        }
    }
}