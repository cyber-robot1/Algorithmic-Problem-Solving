/*
Author: Karim Tarek Ibrahim
Problem name: Queue on Bus Stop
Problem link: https://codeforces.com/problemset/problem/435/A
Date: 20/10/2023
*/

#include <iostream>
using namespace std;
 
int arr[101];
int main()
{
	int n, m, c = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == -1)
			continue;
		else
		{
			if (arr[i] == m)
				c++;
			else
			{
				c++;
				int sum = arr[i];
				for (int j = i + 1; j < n; j++)
				{
					sum += arr[j];
					if (sum > m)
						break;
					else
						arr[j] = -1;
				}
			}
		}
		
	}
	cout << c;
 
	return 0;
}

