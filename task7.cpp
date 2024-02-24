#include <iostream>

void BubbleSort(int arr[], int n);
void SelectionSort(int arr[], int n);
void PrintArray(int[], int n);
void (*sort)(int* arr, int n);

int main() {
    int arr[] = {3, 5, 2, 10, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;
    std::cout << "Chose between 2 functions, 1 for Bubble sort and 2 for Selection sort" << std::endl;
    std::cin >> choice;
    if (choice == 1) {
        sort = BubbleSort;
    } else if (choice == 2) {
        sort = SelectionSort;
    } else {
        std::cout << "Enter a valid input" << std::endl;
    }
    sort(arr, n);
    std::cout << "The sorted array is ";
    PrintArray(arr, n);
}

void BubbleSort(int arr[], int n) {
    bool swapped = false;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
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
}
