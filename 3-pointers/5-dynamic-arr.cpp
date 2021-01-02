#include <iostream>


int main() {
    int size; 
    int staticArray[5];

    std::cout << "Size: "; 
    std::cin >> size;

    int* myArray = new int[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Enter an element: "; 
        std::cin >> myArray[i];
    }

    

    for (int i = 0; i < size; i++) {
        // one way to access array elements
        // std::cout << myArray[i] << std::endl;
        
        // accessing array elements using pointers
        std::cout << *(myArray + i) << std::endl;
    }
    
    delete []myArray;
    // perhaps better use nullptr
    myArray = NULL;

    std::cout << std::endl << std::endl << std::endl << std::endl;
    return 0;
}











