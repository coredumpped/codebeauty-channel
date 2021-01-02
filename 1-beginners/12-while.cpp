#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;

    // Count digits of a number
    int number, count = 0;
    std::cout << "Number: ",
    std::cin >> number;

    if (number == 0)
        std::cout << "You have entered 0. \n";
    else {
        if (number < 0) number *= -1;
        while (number >= 1) {
            number /= 10;
            count++;
        }
    }
    std::cout << "There are " << count << " Digits\n";
    std::cout << std::endl << std::endl << std::endl << std::endl;
}

