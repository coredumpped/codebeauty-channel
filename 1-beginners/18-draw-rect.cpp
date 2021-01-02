#include <iostream>
#include <iomanip>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;
    
    int height, width; 

    std::cout << "Height: "; 
    std::cin >> height;
    std::cout << "Width: "; 
    std::cin >> width; 
    
    char symbol; 
    std::cout << "Symbol: "; 
    std::cin >> symbol;

    for (int h = 0; h < height; h++) {
        for (int w = 0; w < width; w++) {
            std::cout << std::setw(3) << symbol;
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << std::endl << std::endl << std::endl;
}

