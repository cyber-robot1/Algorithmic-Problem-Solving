/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/find-the-pivot-integer/
*/

class Solution {
public:
    int pivotInteger(int n) {
        vector<int> prefixSum(n);
        for(int i=0; i<n; i++)
        {
            prefixSum[i]=i+1;
            if(i)
                prefixSum[i]+=prefixSum[i-1];
        }
        int pivot=-1;
        for(int i=0; i<n; i++)
        {
            if(prefixSum[n-1]==prefixSum[i]+prefixSum[i-1])
            {
                pivot=i+1;
                break;
            }
        }
        return pivot;
    }
};
