#include <iostream>


void introduceMe(std::string name, std::string city, int age = 0) {
    std::cout << "My name is " << name << std::endl; 
    std::cout << "I am from " << city << std::endl;
    if (age != 0)
        std::cout << "I am  " << age << " years old" << std::endl;
}

int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;
    std::string name, city;
    int age; 

    std::cout << "Name: "; 
    std::cin >> name;
    std::cout << "City: "; 
    std::cin >> city;
    std::cout << "Age: "; 
    std::cin >> age;

    introduceMe(name, city, age);


    // introduceMe("Roman", "Los Angeles", 32);
    // introduceMe("Saldina", "Prague");

    std::cout << std::endl << std::endl << std::endl << std::endl;
}


