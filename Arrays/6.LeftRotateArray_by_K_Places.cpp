//------------------------------------------------------------------------//
//                       Left Rotate Array by K Places                    //
//   Steps:                                                               //
//     To rotate left by K:                                               //
//         1.Reverse first K elements                                     //
//         2.Reverse remaining elements                                   //
//         3.Reverse whole array                                          //
//                         TC: O(n)       SC: O(1)                        //
//------------------------------------------------------------------------//

#include <iostream>
#include <algorithm>  // for reverse()
using namespace std;

void leftRotateByK(int arr[], int n, int k) {
    if(n == 0) return;

    k = k % n;  // handle k > n

    // Step 1: reverse first k elements
    reverse(arr, arr + k);

    // Step 2: reverse remaining elements
    reverse(arr + k, arr + n);

    // Step 3: reverse whole array
    reverse(arr, arr + n);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    leftRotateByK(arr, n, k);

    cout << "Rotated Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}