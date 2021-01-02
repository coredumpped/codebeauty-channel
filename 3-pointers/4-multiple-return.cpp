#include <iostream>


int getMin(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (min > numbers[i]) {
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (max < numbers[i]) {
            max = numbers[i];
        }
    }
    return max;
}

// returning multiple values via pointers
void getMinAndMax(int numbers[], int size, int* min, int* max) {  
    for (int i = 1; i < size; i++) {
        if (*max < numbers[i]) {
            *max = numbers[i];
        } 
        if(*min > numbers[i]) {
            *min = numbers[i];
        }
    }
}


int main() {
    std::cout << std::endl << std::endl << std::endl << std::endl;
    int numbers[5] = {5, 4, -2, 29, 6};
    int min = numbers[0];
    int max = numbers[0];
    // passing addresses of min and max in order to get
    // multiple values from function
    getMinAndMax(numbers, 5, &min, &max);
    
    std::cout << "Min is " <<  getMin(numbers, 5) << std::endl;
    std::cout << "Max is " <<  getMax(numbers, 5) << std::endl;
    std::cout << "Min is " << min << ", Max is " << max << std::endl;

    std::cout << std::endl << std::endl << std::endl << std::endl;
    return 0;
}











