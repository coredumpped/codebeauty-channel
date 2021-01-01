#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;

    // The result of dividing 2 whole number will be a whole number
    // binary operator perform an operation on two operands
    std::cout << 5 / 2 << std::endl;  // 2
    std::cout << 5.0 / 2 << std::endl; // 2.5
    std::cout << 5 % 2 << std::endl; // 1

    //unary operators ++, --
    int counter = 7;
    counter++;
    counter--; 
    counter--;
    std::cout << counter << std::endl;
    std::cout << ++counter << std::endl;
    std::cout << counter << std::endl;

    // relational operators <, >, <=, >=, !=
    int a = 5, b = 58;
    std::cout << (a > b) << std::endl;;

    // logical &&, ||, !
    std::cout << !(a == 5 & b == 5) << std::endl;

    std::cout << std::endl << std::endl << std::endl << std::endl;
}

