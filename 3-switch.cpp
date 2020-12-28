#include <iostream>

enum EyeColor {Brown, Blue, Green, Gray, Other};

int main() {
    EyeColor eyeColor = Green;

    // you can also put integer here instead of eyeColor 0 -> Brown
    switch(eyeColor) {
        case Brown: std::cout << "80% of people have brown eyes"; break;
        case Blue: std::cout << "10% of people have blue eyes"; break;
        case Green: std::cout << "2% of people have green eyes"; break;
        case Gray: std::cout << "1% of people have gray eyes"; break;
        case Other: std::cout << "6% of people have othe color eyes"; break;
        default: std::cout << "NOT VALID EYE COLOR";
    }

    
    std::cout << std::endl;
}