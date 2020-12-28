#include <iostream>

// WHILE LOOPS

int main() {
    std::cout << "WHILE:\n";

    int counter = 1;
    while(counter <= 10) {
        std::cout << counter << std::endl;
        ++counter;
        counter++;
    }

    std::cout << "DO WHILE \n";

    int doWhileCounter = 1;
    do {
        std::cout << doWhileCounter << std::endl;
        doWhileCounter++;
    } while(doWhileCounter <= 10);


    std::cout << std::endl;
}