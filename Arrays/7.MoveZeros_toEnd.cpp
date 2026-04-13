
//------------------------------------------------------------------------//
//                       Move Zeros to End                                //
// i will always increment j only when i is non-zero,                     //
// so all non-zero elements will be moved to the front                    //
// and zeros will be moved to the end                                     //
//                         TC: O(n)       SC: O(1)                        //
//------------------------------------------------------------------------//


#include <iostream>
using namespace std;

void moveZeros(int arr[], int n) 
{
    int j = 0; // position for next non-zero

    for(int i = 0; i < n; i++)   
    {
        if(arr[i] != 0)   
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() 
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    moveZeros(arr, n);

    for(int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}