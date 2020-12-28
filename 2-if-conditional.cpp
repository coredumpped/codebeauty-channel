#include <iostream>

int main() {
    bool isTodaySunny = false;
    bool isTodayWeekend = true;
    // You can omit the curly braces if you only have one line of code
    if (isTodaySunny && isTodayWeekend) 
        std::cout << "Go to the park" << std::endl;
    else if (isTodayWeekend && !isTodaySunny) {
        std::cout << "Go the park, but Take an umbrella" << std::endl;
    } else {
        std::cout << "Go to work" << std::endl;
    }

    isTodaySunny 
    ? std::cout << "Go to the park" 
    : std::cout << "Take an umbrella" << std::endl;
}