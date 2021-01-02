#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;
    
    // Multiplication table
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++){
            std::cout << i << " x " << j << " = " << i * j << std::endl;
        }
        std::cout << std::endl << std::endl << std::endl;
    }
    
    std::cout << std::endl << std::endl << std::endl << std::endl;
}

