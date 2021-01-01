#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;
    // type casting
    std::cout << (int)'a' << std::endl;
    std::cout << (int)('a') << std::endl;
    std::cout << (int)('A') << std::endl;

    std::cout << (char)(65) << std::endl;
    std::cout << char(97) << std::endl;
    
    // you can declare variables this way if they're of the same type
    char c1, c2, c3, c4, c5;
    std::cout << "Enter 5 letters: "; 
    std::cin >> c1 >> c2 >> c3 >> c4 >> c5;
    std::cout << "ASCII message: " << int(c1) << " " << int(c2)
    << " " << int(c3) << " " << int(c4) << " " << int(c5);

    std::cout << std::endl << std::endl << std::endl << std::endl;
}