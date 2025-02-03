/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/longest-consecutive-sequence/
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0, answer=0;
        vector<int> res;
        if(nums.empty())
            ans=0;
        else
        {
            ans=1;
            priority_queue<int, vector<int>, greater<int>> pq;
            for(int i=0; i<nums.size(); i++)
                pq.push(nums[i]);
            int first=pq.top();
            pq.pop();
            while(!pq.empty())
            {
                if(pq.top()-first==1)
                {
                    ans++;
                    first=pq.top();
                    pq.pop();
                }
                else if(pq.top()-first==0)
                    pq.pop();
                else
                {
                    res.push_back(ans);
                    ans=1;
                    first=pq.top();
                    pq.pop();
                }
            }
            res.push_back(ans);
            answer=*max_element(res.begin(), res.end());
        }
        return answer;
    }
};
