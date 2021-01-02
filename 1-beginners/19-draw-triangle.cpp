#include <iostream>
#include <iomanip>

// Draw
// *
// * *
// * * *
// * * * *
// * * * * *

int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;
    
    int height;
    char symbol; 

    std::cout << "Enter height : "; 
    std::cin >> height;
    std::cout << "Enter a symbol: "; 
    std::cin >> symbol; 


    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << std::setw(3) << symbol;
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << std::endl;

    for (int i = height; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << std::setw(3) << symbol;
        }
        std::cout << std::endl;
    }


    std::cout << std::endl << std::endl << std::endl << std::endl;
}

