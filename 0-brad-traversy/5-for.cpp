#include <iostream>

// FOR LOOPS

int main() {
    std::cout << "FOR:\n";

    std::string animals[5] = {"cat", "dog", "goat", "bee"};

    for(int i = 0; i < 5; i++) {
        std::cout << animals[i] << " ";
    }

    std::cout << std::endl;
}