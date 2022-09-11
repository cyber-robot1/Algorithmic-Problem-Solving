/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
	long long n, arr[100000], sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}
	cout << abs(sum);
	
	

	return 0;
}


