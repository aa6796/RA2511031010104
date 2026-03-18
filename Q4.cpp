#include <iostream>
using namespace std;

class Vehicle {
protected:
    string vehicleNo, model;

public:
    void getVehicle() {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNo;
        cout << "Enter Model: ";
        cin >> model;
    }

    void displayVehicle() {
        cout << "\nVehicle Number: " << vehicleNo;
        cout << "\nModel: " << model;
    }
};

class Car : public Vehicle {
    string fuelType;
    float price;

public:
    void getCar() {
        getVehicle();
        cout << "Enter Fuel Type: ";
        cin >> fuelType;
        cout << "Enter Price: ";
        cin >> price;
    }

    void displayCar() {
        displayVehicle();
        cout << "\nFuel Type: " << fuelType;
        cout << "\nPrice: " << price;
    }
};

int main() {
    Car c;
    c.getCar();
    c.displayCar();
    return 0;
}