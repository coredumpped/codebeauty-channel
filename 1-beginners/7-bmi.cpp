#include <iostream>


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;

    //  BMI 
    // weight(kg) / height * height(m)
    // Underweight < 18.5
    // Normal weight 18.5 - 24.9
    // Overweight > 25
    float weight, height, bmi; 
    
    std::cout << "Enter your weight in kg: ";
    std::cin >> weight; 
    std::cout << "Enter your height in m: ";
    std::cin >> height;

    bmi = weight / (height * height); 

    std::cout << "Your BMI : " << bmi << std::endl;

    if (bmi < 18.5) {
        std::cout << "You are underweight";
    } else if (bmi > 25) {
        std::cout << "You are FAT! Go run!";
    } else {
        std::cout << "You are normal weight";
    }




    std::cout << std::endl << std::endl << std::endl << std::endl;
}

