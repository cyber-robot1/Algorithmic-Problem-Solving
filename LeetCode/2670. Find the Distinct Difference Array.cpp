/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/find-the-distinct-difference-array/
*/

class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int sz=nums.size();
        vector<int> diff;
        set<int> s;
        for(int i=0; i<sz; i++)
        {
            int prefix=0, suffix=0;
            // Prefix:
            if(i==0)
                prefix=1;
            else
            {
                for(int j=0; j<=i; j++)
                    s.insert(nums[j]);
                prefix=s.size();
            }
            s.clear();
            
            // Suffix:
            if(i==sz-1)
                suffix=0;
            else
            {
                for(int j=i+1; j<=sz-1; j++)
                    s.insert(nums[j]);
                suffix=s.size();
                s.clear();
            }
            diff.push_back(prefix-suffix);
            s.clear();
        }
        return diff;
    }
};
