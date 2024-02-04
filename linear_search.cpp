#include <iostream>

// Linear search function
int linearSearch(const int arr[], int size, int key) {
    for (int i = 0; i < size; ++i)
        if (arr[i] == key)
            return i;
    return -1;
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

    int key;
    std::cout << "Enter the key to search: ";
    std::cin >> key;

    int index = linearSearch(arr, size, key);

    if (index != -1)
        std::cout << "Element " << key << " found at index " << index << std::endl;
    else
        std::cout << "Element " << key << " not found in the array." << std::endl;

    delete[] arr;

    return 0;
}

