#include <iostream>


bool isPrime(int number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;
    
    int number;
    std::cout << "Number: ";
    std::cin >> number;

    isPrime(number) 
    ? std::cout << "Number "<< number << " is prime"
    : std::cout << "Number "<< number << " is NOT prime";

    for (int i = 1; i < 100; i++) {
        isPrime(i) 
        ? std::cout << "Number "<< i << " is prime" << std::endl
        : std::cout << "Number "<< i << " is NOT prime" << std::endl;
    }

    std::cout << std::endl << std::endl << std::endl << std::endl;
}




