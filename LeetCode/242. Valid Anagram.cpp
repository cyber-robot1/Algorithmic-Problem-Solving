/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/valid-anagram/
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        bool flag=true;
        priority_queue<char> S, T;
        if(s.size()!=t.size())
            flag=false;
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                S.push(s[i]);
                T.push(t[i]);
            }
            while(!S.empty())
            {
                if(S.top()!=T.top())
                {
                    flag=false;
                    break;
                }
                else
                {
                    S.pop();
                    T.pop();
                }
            }
        }
        return flag;
    }
};
