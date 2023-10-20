/*
Author: Karim Tarek Ibrahim
Problem name: Tavas and Nafas
Problem link: https://codeforces.com/problemset/problem/535/A
Date: 20/10/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
	string arr1[21] = { "zero","one","two","three","four","five","six",
	"seven", "eight", "nine", "ten", "eleven", "twelve",
	"thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
	"eighteen", "nineteen" };
 
	// 20 30 40 50 60 70 80 90
	string arr2[91];
	arr2[20] = "twenty"; arr2[30] = "thirty"; arr2[40] = "forty"; arr2[50] = "fifty";
	arr2[60] = "sixty"; arr2[70] = "seventy"; arr2[80] = "eighty"; arr2[90] = "ninety";
 
	int n;
	cin >> n;
	if (n >= 0 && n <= 19)
	{
		for (int i = 0; i < 20; i++)
		{
			if (n == i)
			{
				cout << arr1[i];
				break;
			}
		}
	}
	else
	{
		if (n % 10 == 0)
		{
			for (int i = 10; i <= 90; i += 10)
			{
				if (n == i)
				{
					cout << arr2[i];
					break;
				}
			}
		}
		else
		{
			int digit = n % 10;
			n -= digit;
			for (int i = 10; i <= 90; i += 10)
			{
				if (n == i)
				{
					cout << arr2[i];
					break;
				}
			}
			cout << "-";
			for (int i = 0; i < 10; i++)
			{
				if (digit == i)
				{
					cout << arr1[i];
					break;
				}
			}
		}
	}
 
	return 0;
}
