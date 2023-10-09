/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int arr[100001], Size, mx;
bool flag = true;
void f(int index)
{
	if (index == Size)
		return;
	else
	{
		if (flag)
		{
			mx = arr[index];
			flag = false;
		}
		
		if (arr[index] >= mx)
			mx = arr[index];
		
		cout << mx << " ";
		f(index + 1);
	}	
}
 
int main()
{
	cin >> Size;
	for (int i = 0; i < Size; i++)
		cin >> arr[i];
	f(0);
 
	return 0;
}
