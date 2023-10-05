/*
Author: Karim Tarek Ibrahim
*/
// cpp program to check if the given array is palindrome or not using STLs


#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001], rev[100001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	copy(arr, arr + n, rev);
	reverse(rev, rev + n);

	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == rev[i])
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
