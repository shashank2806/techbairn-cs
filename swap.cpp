#include <iostream>

// Function to swap the values of two variables using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Declare two variables
    int num1 = 5, num2 = 10;

    // Display the original values
    std::cout << "Before swap:" << std::endl;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    // Call the swap function with pointers to the variables
    swap(&num1, &num2);

    // Display the values after swapping
    std::cout << "\nAfter swap:" << std::endl;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    return 0;
}

