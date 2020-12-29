#include <iostream>

class Car {
private:
    std::string Name; 
    std::string Color;
    double Price;
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
            std::cout << Name << " is driving";
    }
};

class FlyingCar :public Car {
public:
    FlyingCar(std::string name, std::string color, double price):Car(name, color, price) {

    }
};

int main() {
    std::cout 
        << std::endl
        << std::endl
        << std::endl;

    std::cout << "INHERITANCE:\n";
    
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
    
    std::cout 
        << std::endl
        << std::endl
        << std::endl
        << std::endl
        << std::endl;
    
}




