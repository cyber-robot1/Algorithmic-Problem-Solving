/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/remove-element/
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=val)
            {
                k++;
                ans.push_back(nums[i]);
            }
        }
        nums=ans;
        return k;
    }
};

