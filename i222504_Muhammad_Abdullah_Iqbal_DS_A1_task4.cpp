#include <iostream>
#include <fstream>
#include <string>
#include "Header_task4.h"
using namespace std;

int main() {
    const char* filename = "Employeedata.txt";
    const int maxEmployees = 10;

    EmployeeData<string> employees[maxEmployees];
    int result = ReadEmployeeData(filename, employees, maxEmployees);

    return result;
}
