/*VALID ANAGRAM
LeetCode #242 — Array & Hashing

PROBLEM
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An anagram is a string formed by rearranging the characters of another string, using all the original characters exactly once.

EXAMPLES
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Both strings contain the same characters with the same frequencies.

The character frequencies are different.

APPROACH

Use a frequency array of size 26 because the problem contains lowercase English letters.

1. If s and t have different lengths, they cannot be anagrams, so return false.
2. Create a frequency array hash with 26 positions initialized to 0.
3. Traverse both strings at the same time:
   - Increment the count for the character from s.
   - Decrement the count for the character from t.
4. After the loop, every position should be 0.
5. If any position is not 0, the strings have different character frequencies, so return false.
6. Otherwise, return true.

WHY THIS WORKS

For an anagram, every character must appear the same number of times in both strings.
By incrementing the count for characters in s and decrementing the count for characters in t, matching frequencies cancel each other out.

COMPLEXITY

Let n be the length of the strings.

Time: O(n)
Space: O(1)

The space is O(1) because the frequency array always contains exactly 26 elements.


C++ SOLUTION*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        vector<int> hash(26,0);

        for(int i = 0; i < s.size(); i++){
            hash[s[i] - 'a']++;
            hash[t[i] - 'a']--;
        }

        for(int i : hash){
            if(i != 0){
                return false;
            }
        }

        return true;
    }
};


/*KEY TAKEAWAY

When you need to check whether two strings contain the same characters with the same frequencies, a frequency array is an efficient solution.

For lowercase English letters, vector<int> hash(26, 0) gives an O(n) time and O(1) space solution.*/