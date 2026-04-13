//------------------------------------------------------------------------//
//                         Brute Force Approach                           //
//   we have to remove duplicates from the sorted array that means        //
//   there should be unique elements in the array....                     //
//   so the first thing when we say unique is to use set....              //
//                         TC: O(n log n)       SC: O(1)                  //
//------------------------------------------------------------------------//

#include <iostream>
#include <set>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    set<int> s;
    
    // insert elements into the set
    for(int i = 0; i<n; i++)
    {
        s.insert(arr[i]);
    }

    // copy back to array
    int index = 0;
    for(auto it : s)
    {
        arr[index] = it;
        index++;
    }
    return s.size();

}


int main()
{
    int  arr[] = {10,20,20,30,40,40};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = removeDuplicates(arr,n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < result; i++) {
        cout << arr[i] << " ";
    }

    return 0;

}

//------------------------------------------------------------------------//
//                         Optimal Approach                               //
//   we have to remove duplicates from the sorted array that means        //
//   there should be unique elements in the array....                     //
//   so the first thing when we say unique is to use set....              //
//                         TC: O(n)       SC: O(1)                        //
//------------------------------------------------------------------------//

int removeDuplicates(int arr[], int n)
{
    if (n == 0) return 0;

    int i = 0;  // pointer for unique elements

    for(int j = 1; j<n; j++)
    {
        if(arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}


int main()
{
    int  arr[] = {10,20,20,30,40,40};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = removeDuplicates(arr,n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < result; i++) {
        cout << arr[i] << " ";
    }

    return 0;

}