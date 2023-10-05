/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int arr[101];
long long sum;
bool flag = true;
void f(int arr[], int size, int index)
{
	if (flag)
	{
		index = 0;
		flag = false;
	}
	if (index == size)
		return;
	else
	{
		sum += arr[index];
		f(arr, size, index + 1);
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	f(arr, n, 0);
	cout << fixed << setprecision(6) << sum / double(n);
 
	return 0;
}
