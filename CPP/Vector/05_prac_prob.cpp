// https://leetcode.com/problems/running-sum-of-1d-array/

#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int sum = 0;
        for(int value:nums){
            sum = sum + value;

        }
        return sum;

    }
};