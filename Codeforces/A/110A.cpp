/*
Author: Karim Tarek Ibrahim
Problem name: Nearly Lucky Number
Problem link: https://codeforces.com/problemset/problem/110/A
Date: 19/5/2023
*/

#include <iostream>
using namespace std;
 
// function to calculate No. of 4s & 7s digits in a given number
int luckydigits(long long int n)
{
	int c = 0, digit;
	long long int temp;
	temp = n;
	while (temp)
	{
		digit = temp % 10;
		if (digit == 4 || digit == 7)
			c++;
		temp /= 10;
	}
	return c;
}
 
int main()
{
	
	long long int n, luckyD;
	cin >> n;
	luckyD = luckydigits(n);
	if (luckyD == 4 || luckyD == 7)
		cout << "YES";
	else
		cout << "NO";
 
 
	return 0;
}
