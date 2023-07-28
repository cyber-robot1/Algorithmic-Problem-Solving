/*
Author: Karim Tarek Ibrahim
Problem name: Sum of Digits
Problem link: https://codeforces.com/problemset/problem/102/B
Date: 28/7/2023
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
 
// Function to count No. of digits in a given number
long long int numofDigits(long long int num)
{
	long long int c = 0;
	if (num == 0)
		c = 1;
	else
	{
		while (num)
		{
			c++;
			num = num / 10;
		}
	}
	return c;
}
 
 
// Function to sum digits of a given number
long long int sumofDigits(long long int num)
{
	long long int sum = 0, digit = 0;
	if (num == 0)
		sum = 0;
	else
	{
		while (num)
		{
			digit = num % 10;
			sum = sum + digit;
			num = num / 10;
		}
	}
	return sum;
}
 
int main()
{
	
	string str;
	int x = 0;
	long long int Sum = 0;
	cin >> str;
	if (str.length() == 1)
		cout << 0;
	else
	{
		for (int i = 0; i < str.length(); i++)
		{
			x = str[i] - '0';
			Sum = Sum + x;
		}
 
		long long int n, c = 1, digits;
		n = Sum;
		digits = numofDigits(n);
 
		while (digits > 1)
		{
			n = sumofDigits(n);
			digits = numofDigits(n);
			c++;
		}
 
		cout << c;
	}
 
	return 0;
}
