#include <iostream>

int main() {
    float annualSalary;
    std::cout << "Please Enter your annual salary: ";
    std::cin >> annualSalary; 

    float monthlySalary = annualSalary / 12; 


    std::cout << std::endl << std::endl << std::endl;
    
    
    std::cout << "Your monthly salary is " << monthlySalary << std::endl;
    std::cout << "In 10 years you will earn " << annualSalary * 10 << std::endl;

    char character = 'a';
    int yearOfBirth = 1995;

    char gender = 'm';
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 500000000;

    
    std::cout << "Size of int is " << sizeof(int) << " bytes\n";
    std::cout << "Int min value is " << INT_MIN << std::endl;
    std::cout << "Int max value is " << INT_MAX << std::endl;
    std::cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
    std::cout << "UInt max value is " << UINT_MAX << std::endl; 
    std::cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    std::cout << "Size of char is " << sizeof(char) << " bytes\n";
    std::cout << "Size of float is " << sizeof(float) << " bytes\n";
    std::cout << "Size of double is " << sizeof(double) << " bytes\n";


    int intMax = INT_MAX;
    std::cout << "INT MAX: " << INT_MAX << std::endl;
    // data type overflow
    std::cout << INT_MAX + 1;
    std::cout << std::endl << std::endl;
}

