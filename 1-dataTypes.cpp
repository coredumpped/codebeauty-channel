#include <iostream>

int main() {
    // cant change const variable
  const int age = 25;
  float b = 45.343;
  b = 21.3;
  double balance = 32343.65;
  char gender = 'M';
  //  warning: conversion from string literal to 'char *' is deprecated
  // [-Wc++11-compat-deprecated-writable-strings]
  char* name = "Roman";
  bool isTodaySunny = false;
  int nums [] = {1, 2, 3, 4, 5};
  std::string username = "Roman";
  // this will allocate extra more memory
  std::string colors [10] = {"red", "green", "blue"};

  std::cout << "Age: " << age << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "balance: " << balance << std::endl;
  std::cout << "gender: " << gender << std::endl;
  std::cout << "sizeof gender: " << sizeof(gender) << std::endl;
  std::cout << "name: " << name << std::endl;
  std::cout << "sizeof name: " << sizeof(name) << std::endl;
  std::cout << "nums: " << nums << std::endl;
  std::cout << "length of nums: " << sizeof(nums) / sizeof(int) << std::endl;
  std::cout << "sizeof colors: " << sizeof(colors) << std::endl;
  std::cout << "Empty Element: " << colors[9] << std::endl;

//   std::cout << "Past the end of the array Segmentation fault: " << colors[10] << std::endl;
  std::cout << "Print out nums" << std::endl;
  for (int i = 0; i < 5; i++) {
      std::cout << nums[i] << ", ";
  }

  std::cout << std::endl;
  std::cout << "Print size of each string in the colors array" << std::endl;
  for(int i = 0 ; i < 3; i++) {
      std::cout << sizeof(colors[i]) << std::endl;
  }



  std::cout << std::endl << std::endl << std::endl << std::endl;
}