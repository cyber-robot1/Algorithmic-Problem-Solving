/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
	
  int N, Z, X, min = 0, flag = 1, c = 0;
	cin >> N >> Z;
	for (int i = 1; i <= N; i++)
	{
		cin >> X;
		if (flag)
		{
			min = X;
			flag = 0;
		}
		else
		{
			if (X < min)
				min = X;
		}
		c++;
		if (c % Z == 0 || i == N)
		{
			flag = 1;
			cout << min << " ";
		}
	}
	
  return 0;
}
