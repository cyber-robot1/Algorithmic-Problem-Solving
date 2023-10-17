/*
Author: Karim Tarek Ibrahim
Problem name: Toy Cars
Problem link: https://codeforces.com/problemset/problem/545/A
Date: 17/10/2023
*/

#include <iostream>
using namespace std;
 
int arr[101], a[101][101];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	}
 
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j] == -1 || a[i][j] == 0)
				continue;
			else if (a[i][j] == 1)
				arr[i] = -1;
			else if (a[i][j] == 2)
				arr[j] = -1;
			else if (a[i][j] == 3)
			{
				arr[i] = -1;
				arr[j] = -1;
			}
		}
	}
	
	int answer = 0;
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] == 0)
			answer++;
	}
	cout << answer << endl;
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] == 0)
			cout << i << " ";
	}
	
	return 0;
}

