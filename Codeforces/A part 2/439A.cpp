/*
Author: Karim Tarek Ibrahim
Problem name: Devu, the Singer and Churu, the Joker
Problem link: https://codeforces.com/problemset/problem/439/A
Date: 20/10/2023
*/

#include <iostream>
using namespace std;
 
int arr[101];
int main()
{
	int n, d, sum = 0, answer = 0;
	cin >> n >> d;
	int rest = (n - 1) * 10;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	if (sum + rest > d)
		cout << -1;
	else if (sum + rest == d)
	{
		answer = rest / 5;
		cout << answer;
	}
	else
	{
		answer = rest / 5;
		d -= (sum + rest);
		d /= 5;
		answer += d;
		cout << answer;
	}
 
	return 0;
}

