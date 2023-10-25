/*
Author: Karim Tarek Ibrahim
Problem name: Die Roll
Problem link: https://codeforces.com/problemset/problem/9/A
Date: 25/10/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	int A, B;
	cin >> A >> B; 
	A = max(A, B);
	A = (6 - A) + 1;
	B = 6;
	if (A == 4)
		cout << 2 << "/" << 3;
	else
	{
		while (B % A == 0 && A != 1)
		{
			B /= A;
			A /= A;
		}
		cout << A << "/" << B;
	} 
	return 0;
}
