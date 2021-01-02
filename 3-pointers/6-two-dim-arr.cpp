#include <iostream>


int main() {
    int rows, cols; 
    std::cout << "rows , cols : ";
    std::cin >> rows >> cols; 

    int** table = new int*[rows];
    for (int row = 0; row < rows; row++) {
        table[row] = new int[cols]; 
        for (int col = 0; col < cols; col++) {
            std::cout << "Enter a number: "; 
            std::cin >> table[row][col];
        }
    }

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            std::cout << table[row][col] << " "; 
        }
        std::cout << std::endl;
    }

    // deleting it from memory
    for (int row = 0; row < rows; row++) {
        delete[] table[row];
    }
    delete[] table;
    table = nullptr;

    std::cout << std::endl << std::endl << std::endl << std::endl;
    return 0;
}

