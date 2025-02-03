/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/top-k-frequent-elements/
*/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]++;
        priority_queue<int> freq;
        for(auto it: mp)
            freq.push(it.second);
        
        vector<int> ans;
        while(k--)
        {
            for(auto it: mp)
            {
                if(it.second==freq.top())
                {
                    ans.push_back(it.first);
                    mp[it.first]=-1;
                    freq.pop();
                    break;
                }
            }
        }
        return ans;
    }
};

