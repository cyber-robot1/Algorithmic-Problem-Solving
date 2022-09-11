/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
	long long arr[100000], n, x;
	int pos, flag;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> x;
	
	for (int k = 0; k < n; k++)
	{
		if (arr[k] == x)
		{
			flag = 1;
			pos = k;
			break;
		}
		else
			flag = 0;
	}
	if (flag)
		cout << pos;
	else
		cout << -1;
	


	return 0;
}


