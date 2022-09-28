/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/reverse-integer/
*/

class Solution {
public:
	int reverse(int x) {
		long long digit, rev_num = 0;
		while (x)
		{
			digit = x % 10;
			x = x / 10;
			rev_num = (rev_num * 10) + digit;
		}
		if (rev_num >= -2147483648 && rev_num <= 2147483647)
			return rev_num;
		else
			return 0;
	}
};
