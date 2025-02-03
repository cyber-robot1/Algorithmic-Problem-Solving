/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/most-frequent-even-element/
*/

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%2==0)
                mp[nums[i]]++;
        }
        int mxFrequent=0, element=0;
        if(mp.size()==0)
            element=-1;
        else
        {
            bool flag=true;
            for(auto it: mp)
            {
                if(flag)
                {
                    mxFrequent=it.second;
                    element=it.first;
                    flag=false;
                }
                else
                {
                    if(it.second>mxFrequent)
                    {
                        mxFrequent=it.second;
                        element=it.first;
                    }
                    else if(it.second==mxFrequent)
                    {
                        if(it.first<element)
                            element=it.first;
                    }
                }
            }
        }
        return element;
    }
};

