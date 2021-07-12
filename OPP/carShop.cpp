#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        void getCar();
        string brand;
        string model;
        int year;
        int price;
};

void Car::getCar() {
    cout << "Enter brand: ";
    cin >> brand;
    cout << "Enter model: ";
    cin >> model;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter price: ";
    cin >> price;

    cout << "Car added: " << brand << " " << model << " " << year << " $" << price << endl;

};

class CarShop: public Car {
    public:
        void listCars();
        void getChoice();
        void sellCar();
};

void CarShop::listCars() {
    Car c2;
    c2.brand = brand;
    c2.model = model;
    c2.year = year;
    c2.price = price;

    cout << "1 | " << c2.brand << ": " << c2.model << " " << c2.year << " $" << c2.price << endl;
};

void CarShop::getChoice() {
    int choice;
    cout << "Choose from our cars: \n";
    cin >> choice;

    if (choice == 1) {
        cout << "Congrats on your new car!\n";
    }
};


int main() {
    CarShop cs;
    cs.getCar();
    cs.listCars();
    cs.getChoice();
    return 0;
}
