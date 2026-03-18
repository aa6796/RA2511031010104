#include <iostream>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;

public:
    void getStudent() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudent() {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
    }
};

class Result : public Student {
    int m1, m2, m3;
    int total;
    float average;

public:
    void getMarks() {
        getStudent();
        cout << "Enter 3 subject marks: ";
        cin >> m1 >> m2 >> m3;

        total = m1 + m2 + m3;
        average = total / 3.0;
    }

    void displayResult() {
        displayStudent();
        cout << "\nMarks: " << m1 << ", " << m2 << ", " << m3;
        cout << "\nTotal: " << total;
        cout << "\nAverage: " << average;
    }
};

int main() {
    Result r;
    r.getMarks();
    r.displayResult();
    return 0;
}