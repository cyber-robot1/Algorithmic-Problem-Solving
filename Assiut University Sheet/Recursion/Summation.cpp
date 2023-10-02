/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
long long sum;
bool flag = true;
void maxArr(int arr[], int n, int index)
{
	if (flag)
	{
		index = 0;
		flag = false;
	}
 
	if (index == n)
		return;
	else
	{
		sum += arr[index];
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
	cout << sum;
 
	return 0;
}
