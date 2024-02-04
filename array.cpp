#include <iostream>

using namespace std;

// Function to calculate the sum of elements in an array
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of elements in an array
double calculateAverage(int arr[], int size) {
    if (size == 0) {
        return 0.0; // Avoid division by zero
    }

    int sum = calculateSum(arr, size);
    return static_cast<double>(sum) / size;
}

int main() {
    const int SIZE = 5; // Size of the array
    int numbers[SIZE];

    // Get user input for array elements
    cout << "Enter " << SIZE << " integer elements:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Element " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Calculate and display the sum using the calculateSum function
    cout << "Sum of elements: " << calculateSum(numbers, SIZE) << endl;

    // Calculate and display the average using the calculateAverage function
    cout << "Average of elements: " << calculateAverage(numbers, SIZE) << endl;

    return 0; // Exit the program successfully
}

