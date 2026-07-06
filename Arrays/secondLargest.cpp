#include <iostream>
using namespace std;


int secondLargestElement(int arr[], int arr_size)
{
    int largest = arr[0];
    int secondLargest = -1; // Initialize secondLargest to a value less than any possible array element


    for(int i=0; i<arr_size; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest; // Update secondLargest before updating largest
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i]; // Update secondLargest if current element is greater than secondLargest and not equal to largest
        }
    }
    return secondLargest;
}


int main()
{
    int arr[] = {10,50,20,30,40};
    int arr_size = sizeof(arr) / sizeof(arr[0]); 

    int result = secondLargestElement(arr, arr_size);
    cout << "The second largest element in the array is: " << result << endl;
    return 0;
}