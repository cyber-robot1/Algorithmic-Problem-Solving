/*
Author: Karim Tarek Ibrahim
Problem name: Friends Meeting
Problem link: https://codeforces.com/problemset/problem/931/A
Date: 30/8/2022
*/

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, num_steps = 0, N = 0, result = 0;
	cin >> a >> b;
	
	num_steps = abs(a - b);

	if (num_steps % 2 == 0)      // even 
	{
		N = num_steps / 2;
		result = N * (N + 1);
	}
  
	else                        // odd
	{
		N = num_steps / 2;
		result = (N * (N + 1)) + ceil(double(num_steps) / 2);
	}
  
	cout << result;

	return 0;
}
