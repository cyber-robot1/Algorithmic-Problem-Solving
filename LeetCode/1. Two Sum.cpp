/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/two-sum/

*/

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int a = 0, b = 0;
		for (int i = 0; i < nums.size() - 1; i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					a = i;
					b = j;
				}
			}
		}
		return { a,b };
	}
};
