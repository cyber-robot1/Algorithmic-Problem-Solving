/*
Author: Karim Tarek Ibrahim
Problem name: Minimum Difficulty
Problem link: https://codeforces.com/problemset/problem/496/A
Date: 20/10/2023
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int arr[101];
vector<int> res, mx;
int main()
{
	int n; 
	cin >> n; 
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	for (int i = 1; i < n - 1; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			if (j == i)     
				continue;
			else
			{
				if (j == n - 1)
					break;
				else
				{
					int k = j + 1;
					if (k != i)      
						res.push_back(arr[k] - arr[j]);
					else
					{
						k = i + 1;       
						res.push_back(arr[k] - arr[j]);   
					}
				}
			}
		}
		mx.push_back(*max_element(res.begin(), res.end()));
		res.clear();
	}
	cout << *min_element(mx.begin(), mx.end());
 
	return 0;
}
