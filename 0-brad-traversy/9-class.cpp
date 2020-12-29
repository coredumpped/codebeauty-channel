#include <iostream>

class Car {
public:
    std::string Name; 
    std::string Color;
    double Price;
};

int main() {
    std::cout << "CLASS:\n";
    
    Car myCar;
    myCar.Name = "Toyota"; 
    myCar.Price = 34.67;
    myCar.Color = "Red";

    std::cout << "Name: "<< myCar.Name << std::endl;
    std::cout << "Color: " << myCar.Color << std::endl;
    std::cout << "Price: " << myCar.Price << "$" << std::endl;

    Car myCar2; 
    myCar2.Name = "Volvo"; 
    myCar2.Price = 23443.67;
    myCar2.Color = "Green";

    std::cout << "Name: "<< myCar2.Name << std::endl;
    std::cout << "Color: " << myCar2.Color << std::endl;
    std::cout << "Price: " << myCar2.Price << "$" << std::endl;

    std::cout << std::endl;
}



