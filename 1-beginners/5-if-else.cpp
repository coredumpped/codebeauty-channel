#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;

    // User enters side lengths of a triangle (a, b,c )
    // Program should write out whether that triangle is equlateral, 
    // isoceles or scalene
    int a, b, c;

    std::cout << "Enter side length of a triangle a , b and c: "; 
    std::cin >> a >> b >> c;
    
    if (a == b && a == c && b == c ) std::cout << "Triangle is equlateral" << std::endl;
    else if ( a == b || a == c || b == a || b ==c || c == a || c == b)      std::cout << "Triangle is equlateral" << std::endl;
    else std::cout << "Triangle is scalene" << std::endl;


    std::cout << std::endl << std::endl << std::endl << std::endl;
}