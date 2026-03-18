#include <iostream>
using namespace std;

class Employee {
protected:
    int empId;
    string empName;

public:
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
        cin >> empName;
    }

    void displayEmployee() {
        cout << "\nEmployee ID: " << empId;
        cout << "\nEmployee Name: " << empName;
    }
};

class Manager : public Employee {
    string department;
    float salary;

public:
    void getManager() {
        getEmployee();
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayManager() {
        displayEmployee();
        cout << "\nDepartment: " << department;
        cout << "\nSalary: " << salary;
    }
};

int main() {
    Manager m;
    m.getManager();
    m.displayManager();
    return 0;
}