#include <iostream>
using namespace std;

// Forward declaration of the Car class
class Car;

// The Garage class
class Garage {
private:
    int carsInside;

public:
    Garage() : carsInside(0) {}

    // Declaring Car as a friend class of Garage
    friend class Car;

    void incrementCars() {
        carsInside++;
    }

    void decrementCars() {
        carsInside--;
    }

    void printCarsInside() {
        cout << "Cars inside the garage: " << carsInside << endl;
    }
};

// The Car class
class Car {
private:
    string name;

public:
    Car(string n) : name(n) {}

    void parkInGarage(Garage& garage) {
        garage.incrementCars();
    }

    void removefromGarage(Garage& garage) {
        garage.decrementCars();
    }
    
};

int main() {
    Garage garage;
    Car car1("Toyota");
    Car car2("Honda");

    car1.parkInGarage(garage);
    car2.parkInGarage(garage);

    garage.printCarsInside();  // Output: 2

    car1.removefromGarage(garage);

    garage.printCarsInside();  // Output: 1

    return 0;
}
