#include <iostream>
#include <algorithm>

using namespace std;

void createArray(int arr[], int n) {
    cout << "Enter " << n << " elements of the array:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void printArray(const int arr[], int n) {
    cout << "The array is: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

double averageMinMax(const int arr[], int n) {
    if (n <= 0) {
        cout << "Array size should be greater than 0." << endl;
        return 0.0;
    }

    int maxVal = *max_element(arr, arr + n);
    int minVal = *min_element(arr, arr + n);

    return static_cast<double>(maxVal + minVal) / 2;
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size should be greater than 0." << endl;
        return 1;
    }

    int * arr = new int[n];

    createArray(arr, n);
    printArray(arr, n);

    double avg = averageMinMax(arr, n);

    cout << "The average of the minimum and maximum elements of the array is: " << avg << endl;

    delete[] arr;

    return 0;
}