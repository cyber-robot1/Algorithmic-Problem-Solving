/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/left-and-right-sum-differences/
*/

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sz=nums.size();
        vector<int> prefix(sz), answer;
        for(int i=0; i<sz; i++)
        {
            prefix[i]=nums[i];
            if(i)
                prefix[i]+=prefix[i-1];
        }
        for(int i=0; i<sz; i++)
        {
            if(i==0)
                answer.push_back(prefix[sz-1]-prefix[i]);

            else if(i==sz-1)
                answer.push_back(abs(prefix[i-1]));
            
            else
                answer.push_back(abs((prefix[i-1])-(prefix[sz-1]-prefix[i])));
        }
        return answer;
    }
};
