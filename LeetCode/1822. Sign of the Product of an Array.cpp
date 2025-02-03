/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/sign-of-the-product-of-an-array/
*/

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int x, product = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                nums[i] = 1;
            else if (nums[i] < 0)
                nums[i] = -1;
        }
        for (int i = 0; i < nums.size(); i++)
            product *= nums[i];
        if (product > 0)
            x = 1;
        else if (product < 0)
            x = -1;
        else
            x = 0;
        return x;
    }
};
