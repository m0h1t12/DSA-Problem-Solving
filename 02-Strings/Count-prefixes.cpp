// You are given a string array words and a string s, where words[i] and s comprise only of lowercase English letters.

// Return the number of strings in words that are a prefix of s.

// A prefix of a string is a substring that occurs at the beginning of the string. A substring is a contiguous sequence of characters within a string.

 

// Example:

// Input: words = ["a","b","c","ab","bc","abc"], s = "abc"
// Output: 3
// Explanation:
// The strings in words which are a prefix of s = "abc" are:
// "a", "ab", and "abc".
// Thus the number of strings in words which are a prefix of s is 3.

// level: easy

// tbh I had done this problem in the past in using python but was not able to solve it in c++ earlier but gladly I solved it this time without any use of any help. 
// I learnt the use of .find() function in strings and about strings::npos .

#include <bits/stdc++.h>
using namespace std;class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count =0;
        int n = words.size();
        for(int i=0;i<n;i++){
            if(s.find(words[i])==0){
                count++;
            }

        }
    return count;}
};