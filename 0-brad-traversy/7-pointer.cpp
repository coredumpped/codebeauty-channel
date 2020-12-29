#include <iostream>

void celebrateBirthday(int* age);

int main() {
    std::cout << "POINTERS:\n";

    int myAge = 25;

    std::cout << "myAge before function: " <<  myAge << std::endl;
    
    celebrateBirthday(&myAge);
    std::cout << "myAge after function: " <<  myAge << std::endl;
    std::cout << std::endl;
}

void celebrateBirthday(int* age){
    (*age)++;
    std::cout << "Yay, celebrated birthday " << *age << " birthday" << std::endl;
}

