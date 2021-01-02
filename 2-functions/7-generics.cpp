#include <iostream>

// // passing variables by reference
// void Swap(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// // function overloading
// void Swap(char& a, char& b) {
//     char temp = a;
//     a = b;
//     b = temp;
// }


// template<class Type>
// template<typename Type>
template<typename T>

void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}


int main() {

    std::cout << std::endl << std::endl << std::endl << std::endl;
     
    int a = 5, b = 7; 

    std::cout << a << " - " << b << std::endl;
    Swap<int>(a, b); 
    std::cout << a << " - " << b << std::endl;


    char c = 'c', d = 'd';
    std::cout << c << " - " << d << std::endl;
    Swap<char>(c, d); 
    std::cout << c << " - " << d << std::endl;
    


    std::cout << std::endl << std::endl << std::endl << std::endl;
}











