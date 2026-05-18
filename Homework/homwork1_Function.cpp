#include <iostream>
using namespace std;

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Input arr[" << i << "]: ";
        cin >> arr[i];
    }
}

int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

void sortDescending(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
}

int main() {
    int arr[5];
    int size = 5;

    inputArray(arr, size);

    int sum = calculateSum(arr, size);
    int max = findMax(arr, size);
    int min = findMin(arr, size);

    cout << "Array: ";
    displayArray(arr, size);

    sortDescending(arr, size);

    cout << "\nTotal= " << sum << endl;
    cout << "Average= " << sum / 5.0 << endl;
    cout << "Max= " << max << endl;
    cout << "Min= " << min << endl;
    cout << "Array After sort: ";
    displayArray(arr, size);

    return 0;
}