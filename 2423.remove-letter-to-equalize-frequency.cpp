/*
 * @lc app=leetcode id=2423 lang=cpp
 *
 * [2423] Remove Letter To Equalize Frequency
 */

// @lc code=start
#include <bits/stdc++.h>
class Solution
{
public:
    bool equalFrequency(std::string word)
    {
        for (int i = 0; i < word.size(); ++i)
        {
            std::map<char, int> memo;
            for (int j = 0; j < word.size(); ++j)
            {

                if (j == i)
                {
                    continue;
                }
                if (memo.count(word[j]))
                {
                    memo[word[j]]++;
                }
                else
                {
                    memo[word[j]] = 1;
                }
            }
            std::set<int> st;
            for (auto i : memo)
            {
                st.insert(i.second);
            }
            if (st.size() == 1)
            {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end
