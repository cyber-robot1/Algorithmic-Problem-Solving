/*
Author: Karim Tarek Ibrahim
Problem name: Bear and Finding Criminals
Problem link: https://codeforces.com/problemset/problem/680/B
Date: 18/11/2023
*/

#include <iostream>
using namespace std;
 
int arr[101];
int main()
{
	int n, a; cin >> n >> a;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	int criminals = 0, distances = max((n - a), (a - 1));
	if (arr[a] == 1)
		criminals++;
	
	for (int i = 1; i <= distances; i++)
	{
		int tmp1 = a, tmp2 = a;
		bool f1 = false, f2 = false;
		tmp1 += i;  
		if (tmp1 <= n)
			f1 = true;
		tmp2 -= i;  
		if (tmp2 >= 1)
			f2 = true;
		if (f1==true && f2==true)
		{
			if (arr[tmp1] == 1 && arr[tmp2] == 1)
				criminals += 2;
		}
		else
		{
			if (f1)
			{
				if (arr[tmp1] == 1)
					criminals++;
			}
			else
			{
				if (arr[tmp2] == 1)
					criminals++;
			}
		}
	}
	cout << criminals;
 
	return 0;
}
