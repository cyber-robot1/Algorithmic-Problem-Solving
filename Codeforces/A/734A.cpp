/*
Author: Karim Tarek Ibrahim
Problem name: Anton and Danik
Problem link: https://codeforces.com/problemset/problem/734/A
Date: 5/6/2023
*/

#include <iostream>
using namespace std;
 
char arr[100001];
int main()
{
 
	int n, D = 0, A = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 'D')
			D++;
		else
			A++;
	}
 
	if (D > A)
		cout << "Danik";
 
	else if (D < A)
		cout << "Anton";
	
	else
		cout << "Friendship";
 
 
	return 0;
}
