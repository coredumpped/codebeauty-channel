#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;

    int number, reversedNumber = 0;
    std::cout << "Number: ",
    std::cin >> number;
    
    // 325
    while (number != 0) {
        reversedNumber *= 10;
        int lastDigit = number % 10;
        reversedNumber += lastDigit;
        number /= 10;
    }


    std::cout << "Result : " << reversedNumber;
    std::cout << std::endl << std::endl << std::endl << std::endl;
}

