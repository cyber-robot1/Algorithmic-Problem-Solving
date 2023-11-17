/*
Author: Karim Tarek Ibrahim
Problem name: Game with Integers
Problem link: https://codeforces.com/problemset/problem/1899/A
Date: 17/11/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int n1 = n - 1, n2 = n + 1;
		if (n1 % 3 == 0 || n2 % 3 == 0)
			cout << "First" << endl;
		else
			cout << "Second" << endl;
	}
 
	return 0;
}
