/*
Author: Karim Tarek Ibrahim
Problem link:https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
*/

#include <iostream>
using namespace std;
 
int arr[101][101];
 
int main()
{
	int N, M, X;
	bool flag = false;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
		}
	}
	cin >> X;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (arr[i][j] == X)
				flag = true;
		}
	}
	if (flag)
		cout << "will not take number";
	else
		cout << "will take number";
	
	return 0;
}
