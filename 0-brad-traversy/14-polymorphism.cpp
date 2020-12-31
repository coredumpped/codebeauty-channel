#include <iostream>

class Car {
private: 
    std::string Color;
    double Price;
    
protected: 
    std::string Name;
    bool isBroken;
public:
    Car(std::string name, std::string color, double price) {
        Name = name;
        Color = color;
        Price = price;
        isBroken = false;
    }

    void getInfo() {
        std::cout << "Name: "<< Name << std::endl;
        std::cout << "Color: " << Color << std::endl;
        std::cout << "Price: " << Price << "$" << std::endl;
    }
    
    void crash() {
        std::cout << Name << " crashed" << std::endl;
        isBroken = true;
    }
    void repair() {
        std::cout << Name << " repaired" << std::endl;
        isBroken = false;
    }

    void move() {
        if(isBroken) 
            std::cout << Name << " is broken" << std::endl;
        else 
            std::cout << Name << " is driving" << std::endl;
    }
};

class FlyingCar :public Car {
public:
    FlyingCar(std::string name, std::string color, double price):Car(name, color, price) {

    }
    // its own move method different from Car move method
    void move() {
        if(isBroken) 
            std::cout << Name << " is broken" << std::endl;
        else 
            std::cout << Name << " is flying" << std::endl;
    }
};

class UnderwaterCar :public Car {
public:
    UnderwaterCar(std::string name, std::string color, double price):Car(name, color, price) {

    }
    void move() {
        if(isBroken) 
            std::cout << Name << " is broken" << std::endl;
        else 
            std::cout << Name << " is diving" << std::endl;
    }
};

int main() {
    std::cout 
        << std::endl
        << std::endl
        << std::endl;

    std::cout << "POLYMORPHISM:\n";
    
    Car ford("Ford", "Red", 50000);
    ford.getInfo();
    
    std::cout << std::endl;

    Car volvo("Volvo", "Green", 23443.67); 
    volvo.getInfo();
    
    std::cout << std::endl;

    ford.getInfo();
    ford.crash();
    ford.move();
    
    std::cout << std::endl;

    ford.getInfo();
    ford.repair();
    ford.move();
    
    std::cout << std::endl << std::endl << std::endl;
    
    FlyingCar flyingCar("Sky Furry", "Purple", 156456.678);
    flyingCar.getInfo();
    flyingCar.crash();
    flyingCar.repair();
    flyingCar.move();
    
    std::cout << std::endl << std::endl << std::endl;

    UnderwaterCar underwaterCar("Sea Storm", "Blue", 600000);
    underwaterCar.crash();
    underwaterCar.move();
    underwaterCar.repair();
    underwaterCar.move();

    std::cout << std::endl << std::endl << std::endl;

    Car* car1 = &flyingCar; 
    Car* car2 = &underwaterCar;

    car1 -> crash();
    car2 -> crash();
    
    ford.move();
    flyingCar.move();
    underwaterCar.move();

    car1->repair();
    car2->repair();

    ford.move();
    flyingCar.move();
    underwaterCar.move();

    std::cout 
        << std::endl
        << std::endl
        << std::endl
        << std::endl
        << std::endl;
    
}




