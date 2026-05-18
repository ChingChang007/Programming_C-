#include <iostream>
using namespace std;

void input(int arr[5]) {
    for(int i = 0; i < 5; i++) {
        cout << "Enter number: ";
        cin >> arr[i];
    }
}

void display(int arr[5]) {
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findSum(int arr[5]) {
    int s = 0;
    for(int i = 0; i < 5; i++) {
        s += arr[i];
    }
    return s;
}

float findAverage(int sum) {
    return sum / 5.0;
}

int findMax(int arr[5]) {
    int max = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int findMin(int arr[5]) {
    int min = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] < min) min = arr[i];
    }
    return min;
}

void sortData(int arr[5]) {
    int temp;
    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[5];

    input(arr);

    cout << "Array: ";
    display(arr);

    int sum = findSum(arr);
    cout << "Sum: " << sum << endl;
    cout << "Average: " << findAverage(sum) << endl;
    cout << "Max: " << findMax(arr) << endl;
    cout << "Min: " << findMin(arr) << endl;

    sortData(arr);
    cout << "Sorted: ";
    display(arr);

    return 0;
}
