//------------------------------------------------------------------------//
//                   Intersection of Two Sorted Arrays                    //
// Approach 1: Brute Force                                                //
//      Compare each element of array A with every element of array B     //
//      Time Complexity: O(n × m) ❌ (not efficient)                     //
// Approach 2: Two Pointer (Optimal)                                      //
//      Use two pointers i and j                                          //
//      Traverse both arrays simultaneously                               //
//      Rules:                                                            //
//          If A[i] == B[j] → add to result                               //
//          If A[i] < B[j] → move i++                                     //
//          If A[i] > B[j] → move j++                                     //
//------------------------------------------------------------------------//    
// Steps:                                                                 //
//      1. i = 0, j = 0 → pointers for both arrays                        //
//      2. Loop runs until one array ends                                 //
//      3. if (a[i] == b[j])                                              //
//          Common element found → store in result                        // 
//          Move both pointers                                            //
//      4. else if (a[i] < b[j])                                          //
//          Move i (because smaller value can't match later)              //
//      5. else                                                           //
//          Move j                                                        //
//      6. else                                                           //
//          Move j                                                        //
//              TC: O(n + m)       SC: O(n + m) (for result)              //
//                   n = size of arr1, m = size of arr2                   //
//------------------------------------------------------------------------//

#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& a, vector<int>& b) 
{
    int i = 0, j = 0;
    vector<int> result;

    while (i < a.size() && j < b.size()) 
    {
        if (a[i] == b[j]) 
        {
            result.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j]) 
        {
            i++;
        }
        else 
        {
            j++;
        }
    }

    return result;
}

int main() 
{
    vector<int> a = {1, 2, 2, 3, 4};
    vector<int> b = {2, 2, 3, 5};

    vector<int> ans = intersection(a, b);

    for (int x : ans) 
    {
        cout << x << " ";
    }

    return 0;
}