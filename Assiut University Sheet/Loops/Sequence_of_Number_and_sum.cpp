/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int main()
{
	int N, M, sum = 0;
	while (true)
	{
		cin >> N >> M;
		if (N <= 0 || M <= 0)
			break;
		else
		{
			sum = 0;
			if (N > M)
			{
				for (int i = M; i <= N; i++)
				{
					sum = sum + i;
					cout << i << " ";
				}
				cout << "sum =" << sum;
				cout << endl;
			}
			else 
			{
				for (int i = N; i <= M; i++)
				{
					sum = sum + i;
					cout << i << " ";
				}
				cout << "sum =" << sum;
				cout << endl;
			}
		}
	}

	return 0;
}
