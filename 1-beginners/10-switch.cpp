#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;

    int year, month;
    std::cout << "Year, month: ";
    std::cin >> year >> month;

    switch(month) {
        case 2:
            (year % 4 == 0 && year % 100 != 0) || year % 400 == 0
            ? std::cout << "29 days month" 
            : std::cout << "28 days month."; 
            break;
        case 4:     
        case 6: 
        case 9:
        case 11:
            std::cout << "30 days month.";
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "31 days month";
            break;
        default:
            std::cout << "Incorrect input";

    }


    std::cout << std::endl << std::endl << std::endl << std::endl;
}

