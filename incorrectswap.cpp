#include <iostream>

// Incorrect attempt to swap values without pointers
void incorrectSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    std::cout << "Before swap:" << std::endl;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    // Incorrect attempt to swap values without pointers
    incorrectSwap(num1, num2);

    std::cout << "\nAfter incorrect swap:" << std::endl;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    return 0;
}

