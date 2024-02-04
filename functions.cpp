#include <iostream>

using namespace std;

// Function to calculate the square of a number
int calculateSquare(int num) {
    return num * num;
}

// Function to calculate the cube of a number
int calculateCube(int num) {
    return num * num * num;
}

int main() {
    // Declare variable
    int number;

    // Get user input for the number
    cout << "Enter a number: ";
    cin >> number;

    // Calculate and display the square using the calculateSquare function
    cout << "Square of " << number << " is: " << calculateSquare(number) << endl;

    // Calculate and display the cube using the calculateCube function
    cout << "Cube of " << number << " is: " << calculateCube(number) << endl;

    return 0; // Exit the program successfully
}

