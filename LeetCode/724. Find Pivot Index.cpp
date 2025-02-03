/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/find-pivot-index/
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefixSum(nums.size());
        for(int i=0; i<nums.size(); i++)
        {
            prefixSum[i]=nums[i];
            if(i)
                prefixSum[i]+=prefixSum[i-1];
        }
        int pivot=-1;
        for(int i=0; i<nums.size(); i++)
        {
            if(i)
            {
                if(prefixSum[i-1]==prefixSum[nums.size()-1]-prefixSum[i])
                {
                    pivot=i;
                    break;
                }
            }
            else
            {
                if(prefixSum[nums.size()-1]-prefixSum[i]==0)
                {
                    pivot=i;
                    break;
                }
            }
        }
        return pivot;
    }
};
