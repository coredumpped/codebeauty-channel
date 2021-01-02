#include <iostream>

/* 
    Void pointer in C++ is a general-purpose pointer. That means that it can point to a variable of any data type. But void pointers have certain limitations as well. They cannot be dereferenced directly.

*/
void printNumber(int* numberPtr) {
    std::cout << *numberPtr;
}

void printLetter(char* charPtr) {
    std::cout << *charPtr << std::endl;
}

void print(void* ptr, char type) {
    switch(type) {
        case 'i': // handle int pointer
            std::cout << *((int*)ptr) << std::endl;
            break;
        case 'c': // handle char pointer
            std::cout << *((char*)ptr) << std::endl;
            break;
        default: 
            break;
    }
}

int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;

    int number = 98; 
    char letter = 'a';
    // printNumber(&number);
    // printLetter(&letter);
    print(&number, 'i');
    print(&letter, 'c');
    std::cout << std::endl << std::endl << std::endl << std::endl;
}















