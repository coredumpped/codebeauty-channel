#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;

    int usersPin = 1234, pin, errorCounter = 0;

    do  {
        std::cout << "Enter your PIN number: "; 
        std::cin >> pin;
        if (pin != usersPin) {
            std::cout << "Incorrect PIN! Try again!\n"; 
            errorCounter++;
        }
    } while (errorCounter != 3 && pin != usersPin);

    if (errorCounter < 3) {
        std::cout << "Loading...\n";
    } else {
        std::cout << "Blocked...\n";
    }
    
    std::cout << std::endl << std::endl << std::endl << std::endl;
}

