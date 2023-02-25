/*
Author: Karim Tarek Ibrahim
Problem name: Tricky Alchemy
Problem link: https://codeforces.com/problemset/problem/912/A
Date: 31/7/2022
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  
	long long A, B, x, y, z, num_crystals = 0;
	cin >> A >> B >> x >> y >> z;
	
	A = A - (2 * x);
	B = B - y;
	A = A - y;
	B = B - (3 * z);
	
	if (A < 0 && B < 0)
	{
		num_crystals = abs(A) + abs(B);
		cout << num_crystals;
	}
  
	else if (B < 0)
	{
		num_crystals = abs(B);
		cout << num_crystals;
	}
  
	else if (A < 0)
	{
		num_crystals = abs(A);
		cout << num_crystals;
	}
  
	else
		cout << 0;
	

	return 0;
}
