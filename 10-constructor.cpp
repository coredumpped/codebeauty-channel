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
};

int main() {
    std::cout << "CLASS:\n";
    
    Car myCar("Ford", "Red", 50000);
   

    std::cout << "Name: "<< myCar.Name << std::endl;
    std::cout << "Color: " << myCar.Color << std::endl;
    std::cout << "Price: " << myCar.Price << "$" << std::endl;

    Car myCar2("Volvo", "Green", 23443.67); 
    

    std::cout << "Name: "<< myCar2.Name << std::endl;
    std::cout << "Color: " << myCar2.Color << std::endl;
    std::cout << "Price: " << myCar2.Price << "$" << std::endl;

    std::cout << std::endl;
}



