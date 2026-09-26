// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true


// Example 2:
// Input: s = "rat", t = "car"
// Output: false

 

// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.

// problem from leetcode
// Level: Easy


// Because it was a fimiliar problem to me I was able to solve it on my own without any help. I used the approach of storing the frequency of each letter in an array and then comparing them. If they are equal then we return true else false.


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size())
            return false;

        int freq[26] = {0};

        for(int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0)
                return false;
        }

        return true;
    }
};