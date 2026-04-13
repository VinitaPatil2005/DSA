//------------------------------------------------------------------------//
//                         Linear Search                                  //
//  Algorithm Steps                                                       //
//       1.Start from index 0                                             //
//       2.Compare each element with target                               //
//       3.If match → return index                                        //
//       4.If not found till end → return -1                              //
//                         TC: O(n log n)       SC: O(1)                  //
//------------------------------------------------------------------------//


#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            return i;   //element found
        }
    }
    return -1; //element notfound
}


int main()
{
    int arr[] = {10,30,45,35,78};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 45;

    int result = LinearSearch(arr,n,key);

    if(result != -1)
    {
        cout<<"Element found at index " << result;
    }
    else
    {
        cout<<"Element not found.";
    }

}