// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"


// level : easy

// In this question people had different approaches to solve this problem but I used the approach of sorting the array and then comparing the first and last string of the array because after sorting the first and last string will have the minimum common prefix. So we can compare them and find the longest common prefix. This method was taught by Striver in his video and I found it the easiest.

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size();
        sort(strs.begin(), strs.end());
        string first=strs[0]; string last=strs[n-1];
        string ans="";
        for(int i =0; i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                break;

            }
            ans+=first[i];
        }
        return ans;
    }
};