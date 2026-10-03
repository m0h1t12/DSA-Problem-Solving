// iven an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]

// this question can be unserstood as the followup of the previous question of rotating the array by one position in clockwise direction. In this question we have to rotate the array by k positions in clockwise direction. But if I apply the same approach here that was iterating over each element from behind the array and shifting it to the right and storing the last element as temp and putting at the beginning of the array then it would take O(n*k) time complexity and for such k iterations it would cause TLE. 
// so striver in his video taught a very good observation that I could've guessed if I spent a little more time on it . 
// the first observation was that if we rotate an array by k places it would be the same as rotating it by k%n places because after n rotations the array would be the same as the original array.
// the second observation was that if we wanna rotate the array by k places then we can reverse the whole array and then reverse the first k elements and then reverse the remaining n-k elements. This would give us the desired output in O(n) time complexity and O(1) space complexity.


// level : medium


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

