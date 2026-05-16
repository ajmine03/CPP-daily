// https://leetcode.com/problems/single-number/description/
// 136. Single Number
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int value : nums){
            ans = ans^value;
        }
        return ans;
    }
    
};