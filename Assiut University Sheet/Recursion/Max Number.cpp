/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int mx;
bool flag = true;
void maxArr(int arr[], int n, int index)
{
	if (flag)
	{
		mx = arr[0];
		index = 0;
		flag = false;
	}
 
	if (index == n)
		return;
	else
	{
		if (arr[index] >= mx)
			mx = arr[index];
		maxArr(arr, n, index + 1);
	}
}
 
int arr[1001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	maxArr(arr, n, 0);
	cout << mx;
 
	return 0;
}
