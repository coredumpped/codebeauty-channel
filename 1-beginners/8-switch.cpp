#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;

    float num1, num2;

    char operation;

    std::cout << "Calculator" << std::endl;
    std::cin >> num1 >> operation >> num2;
    
    switch (operation)
    {
    case '+':
        std::cout << num1 + num2 << std::endl;
        break;
    case '-': 
        std::cout << num1 - num2 << std::endl;
        break;
    case '*': 
        std::cout << num1 * num2 << std::endl;
        break;
    case '/': 
        std::cout << num1 / num2 << std::endl;
        break;
    case '%': 
        // Cannot use modulo operator on floating point numbers
        bool isNum1Int, isNum2Int;
        isNum1Int = int(num1) == num1;
        isNum2Int = int(num2) == num2;
        if (isNum1Int && isNum2Int) {
            std::cout << int(num1) % int(num2) << std::endl;
        } else {
            std::cout << "Numbers must be integers";
        }
        break;
    default:
        std::cout << "THIS OPERATION DOES NOT EXIST";
        break;
    }

    std::cout << std::endl << std::endl << std::endl << std::endl;
}

