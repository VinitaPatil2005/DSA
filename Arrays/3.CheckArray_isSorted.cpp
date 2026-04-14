#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return false; // Not sorted
        }
    }
    return true; // Sorted
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    if(isSorted(arr, n)) {
        cout << "Array is sorted";
    } else {
        cout << "Array is not sorted";
    }

    return 0;
}