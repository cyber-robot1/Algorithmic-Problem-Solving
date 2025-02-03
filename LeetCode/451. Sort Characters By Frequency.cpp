/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/sort-characters-by-frequency/
*/

class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for(int i=0; i<s.size(); i++)
            mp[s[i]]++;
        priority_queue<int> pq;
        for(auto it: mp)
            pq.push(it.second);
        string str="";
        while(!pq.empty())
        {
            for(auto it: mp)
            {
                if(pq.top()==it.second)
                {
                    for(int i=1; i<=it.second; i++)
                        str+=it.first;
                    mp[it.first]=-1;
                    break;
                }
            }
            pq.pop();
        }
        return str;
    }
};
