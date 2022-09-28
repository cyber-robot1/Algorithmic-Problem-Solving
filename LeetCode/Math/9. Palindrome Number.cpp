/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/palindrome-number/
*/

class Solution {
public:
	bool isPalindrome(int x) {
		long long digit, rev_num = 0, temp;
		temp = x;
		while (temp)
		{
			digit = temp % 10;
			temp = temp / 10;
			rev_num = (rev_num * 10) + digit;
		}
		if (x < 0)
			return false;
		if (x == rev_num)
			return true;
        else
            return false;
	}
};
