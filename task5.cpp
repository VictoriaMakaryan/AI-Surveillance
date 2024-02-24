#include <iostream>

int max(int arr[], int size);
int min(int arr[], int size);
float avrg(int arr[], int size); 

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]); 
    std::cout << "Max: " << max(arr, size) << std::endl;
    std::cout << "Min: " << min(arr, size) << std::endl;
    std::cout << "Average: " << avrg(arr, size) << std::endl;
}

int max(int arr[], int size) {
    int max_el = arr[0];
    for (int i = 1; i < size; ++i) {
        if (max_el < arr[i]) {
            max_el = arr[i];
        }
    }
    return max_el; 
}

int min(int arr[], int size) {
    int min_el = arr[0];
    for (int i = 1; i < size; ++i) {
        if (min_el > arr[i]) {
            min_el = arr[i];
        }
    }
    return min_el; 
}

float avrg(int arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size; 
}
