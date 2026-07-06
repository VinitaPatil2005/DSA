#include <iostream>
using namespace std;


int secondsmallestElement(int arr[], int arr_size)
{
    int smallest = arr[0];
    int secondSmallest = INT_MAX; // Initialize secondSmallest to the maximum integer value

    for(int i=2; i<arr_size; i++)
    {
        if(arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}


int main()
{
    int arr[] = {10,50,20,30,40};
    int arr_size = sizeof(arr) / sizeof(arr[0]); 

    int result = secondsmallestElement(arr, arr_size);
    cout << "The second smallest element in the array is: " << result << endl;
    return 0;
}