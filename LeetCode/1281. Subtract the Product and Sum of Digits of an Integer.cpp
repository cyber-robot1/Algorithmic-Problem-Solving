/*
Author: Karim Tarek Ibrahim
Problem link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit1, digit2, sum = 0, prod = 1, temp;
        temp = n;
        while (n != 0)
        {
            digit1 = n % 10;
            n = n / 10;
            sum = sum + digit1;
        }
        while (temp != 0)
        {
            digit2 = temp % 10;
            temp = temp / 10;
            prod = prod * digit2;
        }
        return prod - sum;
    }
};
