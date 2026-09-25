// Given an array arr, rotate the array by one position in clockwise direction.


// problem from gfg 


// Time Complexity: O(n)

// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& arr) {
        int n = arr.size();
        int last = arr[n - 1];

        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;
    }
};