//------------------------------------------------------------------------//
//                         Optimal Approach                               //
//   Steps:                                                               //
//     1.Store the first element (because it will be lost after shifting) //
//     2.Shift all elements to the left                                   //
//     3.Put stored element at the last index                             //
//                         TC: O(n)       SC: O(1)                        //
//------------------------------------------------------------------------//


#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n) {
    if(n <= 1) return;

    int first = arr[0];  // Step 1: store first element

    // Step 2: shift elements to left
    for(int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }

    // Step 3: put first element at end
    arr[n - 1] = first;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    leftRotateByOne(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}