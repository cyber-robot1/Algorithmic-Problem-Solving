/*
Author: Karim Tarek Ibrahim
*/
// cpp program to check if the given array is palindrome or not without using STLs


#include <iostream>
#include <algorithm>
using namespace std;


int arr[100001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	bool flag = true;
	for (int i = 0; i < n / 2; i++)
	{
		if (arr[i] == arr[n - i - 1])
			continue;
		else
		{
			flag = false;
			break;
		}
	}
	
	if (flag)
		cout << "Palindrome Array";
	else
		cout << "Not";

	return 0;
}
