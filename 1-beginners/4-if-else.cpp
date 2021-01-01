#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;

    // Users enters integer number
    // Program write out if that number is even or odd; 
    int num; 
    std::cout << "Please enter whole number: ";
    std::cin >> num; 
    if (num % 2 == 0) std::cout <<"Number " << num <<  " is even" << std::endl;
    else std::cout <<"Number " << num <<  " is odd" << std::endl; 
    
    std::cout << std::endl << std::endl << std::endl << std::endl;
}