#include <iostream>

// FUNCTIONS
float sum(float a, float b); // function declaration
void introduceMe(std::string name, int age=0);

int main() {
    std::cout << "FUNCTIONS:\n";

    std::cout << sum(2.5, 3.5) << std::endl;
    std::cout << sum(5.5, 3.5) << std::endl;
    std::cout << sum(6.5, 7.5) << std::endl;
    introduceMe("Roman", 32);
    introduceMe("Alex");
    std::cout << std::endl;
}

// function definition
float sum(float a, float b) {
    return a + b;
}

void introduceMe(std::string name, int age){
    std::cout << "This is " << name << " He is " << age << " years old";
}
