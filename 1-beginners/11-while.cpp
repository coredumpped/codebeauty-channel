#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;

    // Write out all the numbers between 100 - 500 that are
    // divisible by 3 and 5

    int counter = 100; 
    while(counter <= 500) {
        if (counter % 3 == 0 && counter % 5 == 0) {
            std::cout << counter << std::endl;
        }
        counter++;
    }


    std::cout << std::endl << std::endl << std::endl << std::endl;
}

