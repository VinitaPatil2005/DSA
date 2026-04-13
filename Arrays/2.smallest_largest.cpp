#include <iostream>
using namespace std;

int main() {
    int size = 4;
    int arr[size] = {10,20,-30,40};
    int smallest = INT_MAX;
    
    for(int i=0; i<=size; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
        cout<<arr[i];
    }
    
    cout<<smallest;
    

    return 0;
}