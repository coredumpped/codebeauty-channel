#include <iostream>

int main() {
    std::cout << "ARRAY:\n";
    int luckyNumbers[5] = {1, 3, 5, 7, 9};

    std::cout << luckyNumbers << std::endl;
    std::cout << &luckyNumbers[0] << std::endl;
    std::cout << luckyNumbers[0] << std::endl;

    int* luckyPointer = luckyNumbers; 
    std::cout 
        << "Pointing to " 
        << luckyPointer 
        << ", value: " 
        <<  *luckyPointer
        << std::endl;
    
    luckyPointer++;
    luckyPointer++;
    luckyPointer++;
    luckyPointer++;
    
    

    std::cout 
        << "Pointing to " 
        << luckyPointer 
        << ", value: " 
        <<  *luckyPointer
        << std::endl;

    std::cout << std::endl;
}



