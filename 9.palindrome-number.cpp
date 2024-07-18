/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
#include <bits/stdc++.h>
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        if (x < 10)
        {
            return true;
        }
        string y = to_string(x);
        int start = 0;
        int end = y.length() - 1;
        while (start < end)
        {
            if (y[start] != y[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
// @lc code=end
