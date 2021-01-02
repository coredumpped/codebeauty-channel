#include <iostream>


int main() {
    int hostUserNum, guestUserNum;

    std::cout << "Host: "; 
    std::cin >> hostUserNum; 
    system("clear");
    std::cout << "Guest: ";
    std::cin >> guestUserNum;         
            
    // if (hostUserNum == guestUserNum) {
    //     std::cout << "Correct!";
    // } else {
    //     std::cout << "Failed!";
    // }

    (hostUserNum == guestUserNum) 
    ? std::cout << "Correct!"
    : std::cout << "Failed!";

    system("clear");
    std::cout << std::endl << std::endl << std::endl << std::endl;
}

