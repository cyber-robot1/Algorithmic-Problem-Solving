/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[101];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			reverse(arr, arr + i);	
		}
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	
	return 0;
}
