#include <iostream>
#include <algorithm>

// Bubble sort function
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap if the element found is greater than the next element
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Binary search function
int binarySearch(const int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid; // Key found at index mid
        else if (arr[mid] < key)
            left = mid + 1; // Search in the right half
        else
            right = mid - 1; // Search in the left half
    }

    return -1; // Key not found
}

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arr = new int[size];

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Bubble sort the array
    bubbleSort(arr, size);

    std::cout << "Sorted array using Bubble Sort:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int key;
    std::cout << "Enter the key to search: ";
    std::cin >> key;

    // Perform binary search on the sorted array
    int index = binarySearch(arr, size, key);

    if (index != -1)
        std::cout << "Element " << key << " found at index " << index << std::endl;
    else
        std::cout << "Element " << key << " not found in the array." << std::endl;

    delete[] arr;

    return 0;
}

