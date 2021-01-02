#include <iostream>


void function();

int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;
    std::cout << "Hello from main" << std::endl;
    function();
    function();
    function();

    std::cout << std::endl << std::endl << std::endl << std::endl;
}


void function() {
    std::cout << "Hello from function" << std::endl;
}