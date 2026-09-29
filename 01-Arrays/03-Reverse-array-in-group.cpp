// Reverse Array in Groups

// Given an integer array arr[] and an integer k, reverse every consecutive group of k elements. If fewer than k elements remain at the end, reverse all of them.

// Examples:

// Input: arr[] = [1, 2, 3, 4, 5], k = 3
// Output: [3, 2, 1, 5, 4]
// Explanation: First group consists of elements 1, 2, 3. Second group consists of 4, 5.
// Input: arr[] = [5, 6, 8, 9], k = 5
// Output: [9, 8, 6, 5]
// Explanation: Since k is greater than the number of remaining elements, the entire array is reversed.

// levl: Easy
//  honestly I had to look up for the solution in the chatgpt I couldn't think in that way to solve it my iterating a pointer over array with k gaps and reversing the elements in that range.
//  however I figured out the way out of complextion made at the end of the array when the remaining elements are less than k.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void reverseInGroups(vector<int> &arr, int k)
    {

        int n = arr.size();
        if (k >= n)
        {
            int l = 0;
            int r = n - 1;
            while (l < r)
            {
                swap(arr[l], arr[r]);
                l++;
                r--;
            }
        }
        else
        {
            for (int i = 0; i < n; i += k)
            {
                int r = min(i + k - 1, n - 1);
                int l = i;
                while (l < r)
                {
                    swap(arr[l], arr[r]);
                    l++;
                    r--;
                }
            }
        }
    }
};
