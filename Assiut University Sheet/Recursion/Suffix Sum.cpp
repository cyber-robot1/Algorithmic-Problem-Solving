/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
long long sum;
int steps;
void f(int arr[], int n, int m, int index)
{
	if (steps == m)
		return;
	else
	{
		sum += arr[index];
		steps++;
		f(arr, n, m, index - 1);
	}
}
 
int arr[100001];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	f(arr, n, m, n - 1);
	cout << sum;
 
	return 0;
}
