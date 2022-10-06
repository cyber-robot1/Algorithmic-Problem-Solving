/*
Author: Karim Tarek Ibrahim
Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
*/

#include <iostream>
using namespace std;

int arr[101][101];

int main()
{
	int N, prim_d = 0, sec_d = 0;       //(prim_d)=> sum of primary diagonal elements, (sec_d)=> sum of secondary diagonal elements.
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == j)
				prim_d = prim_d + arr[i][j];
		}
	}
	
	int j = N - 1; 
	for (int i = 0; i < N; i++)
	{
		while (j >= 0)
		{
			sec_d = sec_d + arr[i][j];
			break;
		}
		j--;
	}
	cout << abs(prim_d - sec_d);
	
	return 0;
}
