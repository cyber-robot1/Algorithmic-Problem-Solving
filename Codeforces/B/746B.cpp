/*
Author: Karim Tarek Ibrahim
Problem name: Decoding
Problem link: https://codeforces.com/problemset/problem/746/B
Date: 21/11/2023
*/

#include <iostream>
#include <deque>
using namespace std;
 
char arr[2001] = { '\0' };  
int main()
{
	int n; cin >> n;
	deque<char> d(n);
	for (int i = 0; i < n; i++)
		cin >> d[i];
	for (int i = 0; i < d.size();)
	{
		int steps = 0, x = 0;
		if (d.size() % 2 == 0)
			x = d.size() / 2;    
		else
			x = (d.size() / 2) + 1; 
		for (int j = 0; j < n; j++)
		{
			if (int(arr[j]) == 0)
			{
				steps++;               
				if (steps == x)
				{
					arr[j] = d.front();
					break;
				}
			}
		}
		d.pop_front();
	}
	for (int i = 0; i < n; i++)
		cout << arr[i];
 
	return 0;
}
