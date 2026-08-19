/*Contains Duplicate

LeetCode 217 — Array & Hashing

Problem
Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.

Examples

Example 1

Input: nums = [1,2,3,1]
Output: true

`1` appears twice.

Multiple values appear more than once.

Approach

Use a **hash set** to keep track of the values we have already seen.

1. Create an empty `unordered_set`.
2. Iterate through the array.
3. For each number:
   - If it already exists in the set, return `true`.
   - Otherwise, insert it into the set.
4. If the loop finishes without finding a duplicate, return `false`.

Why this

A set stores only unique values. Therefore, when we encounter a number that is already in the set, we know that the number appeared earlier in the array.

Complexity

- Time: O(n) average
- Space: O(n)

where `n` is the number of elements in `nums`.

C++ Solution */

#include<iostream>
#include<unordered_set>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int num:nums){
            if(set.count(num)){
                return true;
            }
            set.insert(num);
        }
        return false;
    }
};

/*Key Takeaway
When a problem asks whether an array contains repeated values, an `unordered_set` is usually the simplest and most efficient solution.
*/