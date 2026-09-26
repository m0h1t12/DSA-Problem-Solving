// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// example  :  egg and add are isomorphic because e -> a and g -> d. But foo and bar are not isomorphic because f -> b, o -> a, but the second o cannot map to r.

// I was not able to solve this problem on my own. I watched a video by Striver for it's solution, However I still wan't able to understand the solution but later I did understand it and made it clear by 2 logics that are:

// 1. every char must be mapped to a unique char in the other string .
// 2. each char must be mapped to the same char in the other sting.

// for this purpose we used two different arrays of size 256 to store a unique mapping for each char of the two stings .If we find a char that is already mapped to a different char in the other string then we return false. If we reach the end of the strings without any conflicts then we return true.

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int mp1[256] = {0};
        int mp2[256] = {0};

        for (int i = 0; i < s.size(); i++) {

            if (mp1[s[i]] != mp2[t[i]]) {
                return false;
            }

            mp1[s[i]] = i + 1;
            mp2[t[i]] = i + 1;
        }

        return true;
    }
};