/*
Author: Karim Tarek Ibrahim
Problem name: Sort the Array
Problem link: https://codeforces.com/problemset/problem/451/B
Date: 25/11/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
bool isSorted(int Size, int arr[])
{
	bool flag = true;
	for (int i = 0; i < Size; i++)
	{
		if (i == Size - 1)
			break;
		else
		{
			if (arr[i] > arr[i + 1])
			{
				flag = false;
				break;
			}
		}
	}
	return flag;
}
 
int arr[100001];
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int start = 0, end = 0;
	bool flag = false, fend = true;
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			fend = false;
			break;
		}
		else
		{
			if (arr[i] > arr[i + 1])
			{
				flag = true;
				start = i + 1;
				for (int j = i + 1; j < n; j++)
				{
					if (arr[j] > arr[j + 1])
						continue;
					else
					{
						end = j + 1;
						break;
					}
				}
			}
			if (flag)
				break;
		}
	}
	if (end == 0 && fend)
		end = n;
 
	if (start == 0 && end == 0)
	{
		cout << "yes" << endl;
		cout << 1 << " " << 1;
	}
	else
	{
		reverse(arr + start - 1, arr + end);
		if (isSorted(n, arr))
		{
			cout << "yes" << endl;
			cout << start << " " << end;
		}
		else
			cout << "no";
	}
 
	return 0;
}
