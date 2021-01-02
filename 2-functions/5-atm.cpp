#include <iostream>

void showMenu() {
    std::cout << "************MENU************" << std::endl;
    std::cout << "1. Check balance" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Exit Menu" << std::endl;
    std::cout << "*****************************" << std::endl;
}


int main() {

    std::cout << std::endl << std::endl << std::endl << std::endl;
    
    int option;
    double amount;
    double balance = 500;

    
    do{
        showMenu();
        std::cout << "Option: ";
        std::cin >> option;
        // clear terminal bash command
        system("clear");
        switch (option)
        {
            case 1: 
                std::cout << "Balance: " << balance << std::endl;
                break;
            case 2: 
                std::cout << "Enter the amount to deposit: ";
                std::cin >> amount;
                balance += amount;
                std::cout << "Balance: " << balance << std::endl;
                break;
            case 3: 
                std::cout << "Enter the amount to withdraw: ";
                std::cin >> amount;
                if (amount <= balance){
                    balance -= amount;
                    std::cout << "Balance: " << balance << std::endl;
                } else {
                    std::cout << "Not enough money" << std::endl;
                }
                break;
        
            default:
                std::cout << "\nInvalid option. Try again\n";
                break;
        }

    }  while (option != 4);

    

    std::cout << std::endl << std::endl << std::endl << std::endl;
}











