#include <iostream>
using namespace std;

//VERY BASIC CALCULATOR

void calculator() {
    int x, y;
    cout << "Enter number one: ";
    cin >> x;
    cout << "Enter number two: ";
    cin >> y;

    int sum = x + y;
    int diff = x - y;
    int div = x / y;
    int mult = x * y;


    string choice;
    cout << "What do you want to do with the numbers?\n(add/subtract/divide/multiply)\n";
    cin >> choice;

    if (choice == "add") {
        cout << sum;
    } else if (choice == "subtract") {
        cout << diff;
    } else if (choice == "divide") {
        cout << div;
    } else if (choice == "multiply") {
        cout << mult;
    } else {
        cout << "Invalid input!";
    }
}

int main() {
    cout << "Welcome, this is my first calculator in C++!\n";
    calculator();
}
