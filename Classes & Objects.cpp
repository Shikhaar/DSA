#include <iostream>
using namespace std;
class Car {
public: 
    string brand;
    int year;

    void displaycars() {
        cout << "car brand: " << brand << ", Year: "<< year << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "ferrari";
    car1.year = 2020;
    car1.displaycars();
    return 0;
}
