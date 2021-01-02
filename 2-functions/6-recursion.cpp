#include <iostream>


int factorial (int num) {
    if (num == 1) return 1;
    return num * factorial(num - 1);
}


int main() {

    std::cout << std::endl << std::endl << std::endl << std::endl;
    
    std::cout << factorial(4) << std::endl;
    

    std::cout << std::endl << std::endl << std::endl << std::endl;
}











