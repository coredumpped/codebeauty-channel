#include <iostream>

class Car {
public:
    std::string Name; 
    std::string Color;
    double Price;

    Car(std::string name, std::string color, double price) {
        Name = name;
        Color = color;
        Price = price;
    }

    void getInfo() {
        std::cout << "Name: "<< Name << std::endl;
        std::cout << "Color: " << Color << std::endl;
        std::cout << "Price: " << Price << "$" << std::endl;
    }
};

int main() {
    std::cout << "CLASS:\n";
    
    Car myCar("Ford", "Red", 50000);
    myCar.getInfo();

    Car myCar2("Volvo", "Green", 23443.67); 
    myCar.getInfo();
    
    std::cout << std::endl;
}



