#include <iostream>


int sum(int a, int b);
double sum(double a , double b);
float sum(float a, float b, float c);


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;
   
    std::cout << sum(5, 6) << std::endl;
    std::cout << sum(32.5, 64.3) << std::endl;
    std::cout << sum(5.2, 6.3, 0.5) << std::endl;

    std::cout << std::endl << std::endl << std::endl << std::endl;
}



int sum(int a, int b){
    int result = a + b;
    return result;
}

double sum(double a , double b){
    return a + b;
}

float sum(float a, float b, float c){
    return a + b + c;
}







