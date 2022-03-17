
#include <fstream>
#include <string>
#include <vector>

#include "Employee.h"

enum class options { ADD = 1,
                     VIEW = 2 };

// file path to save on the Device
const char* EmployeePath = "handling_obFiles/data/data.bin";
char* memBlock;  // global buffer

// some prototypes
vector<Employee*> readEmployees(const char* filePath);
void writeEmployees(Employee employee, const char* filePath);
void handle_employee();