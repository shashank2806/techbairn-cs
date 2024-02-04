#include <iostream>

using namespace std;

int main() {
    // Declare variable
    int number;

    // Get user input for the number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is even or odd using if/else statement
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is an odd number." << endl;
        return 0;
    }

    // Display the multiplication table for the number using a for loop
    cout << "Multiplication table for " << number << ":" << endl;
    for (int i = 1; i <= 20; ++i) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }

    return 1; // Exit the program successfully
}

