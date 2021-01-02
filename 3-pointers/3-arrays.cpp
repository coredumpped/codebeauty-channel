#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;
    
    // int luckyNumbers[5] = {2, 3, 5, 7, 9};
    // std::cout << luckyNumbers << std::endl;
    // std::cout << &luckyNumbers[0] << std::endl;
    // std::cout << luckyNumbers[2] << std::endl;
    // std::cout << *(luckyNumbers + 2) << std::endl;

    int luckyNumbers[5];

    // input numbers into the array
    for (int i = 0; i < 5; i++) {
        std::cout << "Number: "; 
        std::cin >> luckyNumbers[i];
    }

    for (int i = 0; i < 5; i++) {
        // dereference pointer
        std::cout << *(luckyNumbers + i) << " ";
    }


    std::cout << std::endl << std::endl << std::endl << std::endl;
    return 0;
}











