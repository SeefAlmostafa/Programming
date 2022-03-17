#include "handle_employee.h"

// function to read employees from the file
vector<Employee*> readEmployees(const char* filePath) {
    vector<Employee*> employeeList;
    try {
        ifstream myFile(filePath, ios::in | ios::binary | ios::ate);
        if (myFile.is_open()) {
            long size = myFile.tellg();
            memBlock = new char[size];
            myFile.seekg(0, ios::beg);
            myFile.read(memBlock, size);
            myFile.close();

            long byteIndex = 0;
            while (byteIndex < size) {
                Employee* employee = ((Employee*)(memBlock + byteIndex));
                employeeList.push_back(employee);
                byteIndex += sizeof(Employee);
            }

        } else {
            cerr << "--> unable to open file" << endl;
        }

    } catch (exception& e) {
        cout << "Standard exception: " << e.what() << endl;
    }
    return employeeList;
}

// function to write employees and store them into a file
void writeEmployees(Employee employee, const char* filePath) {
    try {
        ofstream myFile;
        myFile.open(filePath, ios::out | ios::app | ios::binary);
        myFile.write((char*)&employee, sizeof(employee));  // ?
        myFile.close();
        cout << "\nrecord is added to file\n\n";
    } catch (exception& e) {
        cout << "-> standard exception: " << e.what() << endl;
    }
}

void handle_employee() {
    string name, position;
    double salary;
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
            cin >> ws;  // clean
            getline(cin, name);
            cout << "Enter position:";
            getline(cin, position);
            cout << "Enter salary:";
            cin >> salary;

            char* c_name = new char[name.length() + 1];
            char* c_position = new char[position.length() + 1];

            strcpy(c_name, name.c_str());
            strcpy(c_position, position.c_str());

            employee.set_name(c_name);
            employee.set_position(c_position);
            employee.set_salary(salary);

            writeEmployees(employee, EmployeePath);
            delete[] c_name;
            delete[] c_position;

        } else if (option == (int)options::VIEW) {
            vector<Employee*> EmployeeFile = readEmployees(EmployeePath);
            cout << "\n--------File Content--------\n";
            for (auto line = EmployeeFile.begin(); line != EmployeeFile.end(); line++) {
                Employee* employee = *line;
                employee->printData();
            }
            cout << "\n";
        } else {
            break;
        }
    }
    cout << "\n";
    cin.ignore();
    delete[] memBlock;
}