/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
bool flag = true;
void f(int n, int arr[])
{
	if (flag)
	{
		n -= 1;
		flag = false;
	}
 
	if (n < 0)
		return;
	else
	{
		if (n % 2 == 0)
			cout << arr[n] << " ";
			
		f(n - 1, arr);
	}
}
 
int arr[1001];
int main()
{
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	f(n, arr);
 
	return 0;
}
