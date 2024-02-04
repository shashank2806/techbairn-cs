#include <iostream>

int main() {
    int number = 42;         // Declare a variable
    int* ptr = &number;      // Declare a pointer and initialize it to the address of the variable
    std::cout << *ptr << std::endl; // Access and print the value using the pointer
    *ptr = 99;               // Modify the value of the variable through the pointer
    std::cout << number << std::endl; // Access and print the updated value of the variable

    return 0;
}

