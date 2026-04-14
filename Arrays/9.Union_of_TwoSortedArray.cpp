//------------------------------------------------------------------------//
//                         Union of Two Sorted Arrays                     //
//  Since arrays are sorted, we can use an efficient two-pointer          //
//  technique instead of brute force.                                     //
//  Idea:                                                                 //
//      1.Use two pointers i and j                                        //
//      2.Compare elements of both arrays                                 //
//      3.Add smaller element and move pointer                            //
//      4.Skip duplicates                                                 //
//  Steps:                                                                //
//      1.Initialize i = 0, j = 0                                         //
//      2.Compare:                                                        //
//          If arr1[i] < arr2[j] → add arr1[i]                            // 
//          If arr2[j] < arr1[i] → add arr2[j]                            //
//          If equal → add once, move both                                //
//      3.Add remaining elements                                          //
//              TC: O(n + m)       SC: O(n + m) (for result)              //
//                   n = size of arr1, m = size of arr2                   //
//------------------------------------------------------------------------//


#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) 
{
    int i = 0, j = 0;
    vector<int> result;

    while (i < a.size() && j < b.size()) 
    {
        // Avoid duplicates
        if (!result.empty() && result.back() == a[i]) 
        {
            i++;
            continue;
        }
        if (!result.empty() && result.back() == b[j]) 
        {
            j++;
            continue;
        }

        if (a[i] < b[j]) 
        {
            result.push_back(a[i]);
            i++;
        } else if (b[j] < a[i]) 
        {
            result.push_back(b[j]);
            j++;
        } else 
        {
            result.push_back(a[i]);
            i++;
            j++;
        }
    }

    // Remaining elements of a[]
    while (i < a.size()) 
    {
        if (result.empty() || result.back() != a[i])
            result.push_back(a[i]);
        i++;
    }

    // Remaining elements of b[]
    while (j < b.size()) 
    {
        if (result.empty() || result.back() != b[j])
            result.push_back(b[j]);
        j++;
    }

    return result;
}

int main() 
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 5, 6};

    vector<int> res = findUnion(a, b);

    for (int x : res)
        cout << x << " ";

    return 0;
}