/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/missing-number/
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]++;
        int missing=0;
        for(int i=0; i<=nums.size(); i++)
        {
            if(mp[i]==0)
            {
                missing=i;
                break;
            }
        }
        return missing;
    }
};
