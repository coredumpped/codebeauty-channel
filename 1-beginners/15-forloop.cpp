#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;
    
    // the factorial of a number
    // 6! = 1 * 2 * 3 * 4 * 5 * 5;

    int number, factorial = 1;
    std::cout << "Number: ";
    std::cin >> number;

    for(int i = 1; i <= number; i++) {
        factorial *= i;
    }

    std::cout << "Result: " << factorial;

    std::cout << std::endl << std::endl << std::endl << std::endl;
}

