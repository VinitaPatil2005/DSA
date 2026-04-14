#include <iostream>
using namespace std;


int largestElement(int arr[], int arr_size)
{
    int largest = arr[0];

    for(int i=0; i<arr_size; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}


int main()
{
    int arr[] = {10,50,20,30,40};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = largestElement(arr, arr_size);
    cout << "The largest element in the array is: " << result << endl;
    return 0;
}