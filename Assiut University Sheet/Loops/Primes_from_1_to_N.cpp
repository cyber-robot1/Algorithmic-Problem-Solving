/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
	
  long long N, flag = 0;
	cin >> N;
	for (int i = 2; i <= N; i++)
	{
		flag = 0;
		for (int k = 1; k <= i; k++)
		{
			if (i % k == 0)
				flag++;
		}
		if (flag == 2)
			cout << i << " ";
	}

	return 0;
}
