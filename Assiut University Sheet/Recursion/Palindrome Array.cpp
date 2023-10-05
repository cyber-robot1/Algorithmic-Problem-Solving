/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
bool flag = true, tmp = true;
int arr[100001];
void isPalindromeArr(int arr[], int n, int index)
{
	if (tmp)
	{
		index = 0;
		tmp = false;
	}
 
	if (index == n / 2)
		return;
	else
	{
		if (arr[index] != arr[n - index - 1])
		{
			flag = false;
			return;
		}
		else
			return isPalindromeArr(arr, n, index + 1);
	}
}
 
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	isPalindromeArr(arr, n, 0);
 
	if (flag)
		cout << "YES";
	else
		cout << "NO";
 
	return 0;
}
