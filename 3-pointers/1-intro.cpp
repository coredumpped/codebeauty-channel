#include <iostream>


int main() {

    std::cout << std::endl << std::endl << std::endl << std::endl;
     
    int n = 5;
    int* ptr = &n; 
    std::cout << n << std::endl;

    std::cout << &n << std::endl;
    std::cout << *ptr << std::endl;
    *ptr = 10;
    std::cout << n << std::endl;
    
    int v; 
    int* ptr2 = &v; 
    *ptr2 = 17;
    std::cout << "v: " << *ptr2;


    std::cout << std::endl << std::endl << std::endl << std::endl;
}











