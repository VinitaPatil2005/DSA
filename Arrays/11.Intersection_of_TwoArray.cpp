//------------------------------------------------------------------------//
//                         Intersection of Two Arrays                     //
//  Optimal Approach (Hash Set)                                           //
//      Idea:                                                             //
//          1.Store elements of first array in a set                      //
//          2.Traverse second array:                                      //
//          3.If element exists in set → add to result set                //
//  Time Complexity:                                                      //
//      Building set → O(n)                                               //
//      Traversing → O(m)                                                 //
//          Total = O(n + m)                                              //
//  Space Complexity:                                                     //
//      Set storage → O(n)                                                //
//          Total = O(n)                                                  //
//------------------------------------------------------------------------//


#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
    unordered_set<int> set1(nums1.begin(), nums2.end());
    unordered_set<int> result;

    for(int s : nums2)
    {
        if(set1.count(s))
        {
            result.insert(s);
        }
    }

    return vector<int>(result.begin(), result.end());
}

int main()
{
    vector<int> nums1 = {3,4,7,9,2,2};
    vector<int> nums2 = {4,9,2};

    vector<int> ans = intersection(nums1, nums2);

    for (int x : ans)
        cout << x << " ";

    return 0;
}