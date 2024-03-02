#include <iostream>

void BubbleSort(int arr[], int n);
void SelectionSort(int arr[], int n);
void PrintArray(int arr[], int n);

enum SortingStrategy {
    Bubble,
    Selection
};

struct SortingOption {
    SortingStrategy strategy;
    void (*ptr)(int[], int n);
};

void BubbleSort(int arr[], int n) {
    bool swapped = false;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            std::swap(arr[i], arr[min_index]);
        }
    }
}

void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int choice;
    std::cout << "Enter the sorting strategy: \n 1. BubbleSort \n 2. SelectionSort \n";
    std::cin >> choice;

    SortingOption sortingOptions[] = {
        {Bubble, &BubbleSort},
        {Selection, &SelectionSort}
    };

    if (choice >= 1 && choice <= 2) {
        choice--;

        SortingOption selectedOption = sortingOptions[choice];

        int arr[] = {1, 6, 4, 2, 10, -5, 9};
        int n = sizeof(arr) / sizeof(arr[0]);

        selectedOption.ptr(arr, n);

        std::cout << "Sorted array using the chosen strategy: ";
        PrintArray(arr, n);
    } else {
        std::cout << "Invalid choice. Please enter a valid sorting strategy.\n";
    }

    return 0;
}
