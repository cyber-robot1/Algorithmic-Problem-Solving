/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, num_steps = 0, N = 0, result = 0;
	cin >> a >> b;
	if (a > b)
		num_steps = a - b;
	else
		num_steps = b - a;
	if (num_steps % 2 == 0)      // even 
	{
		N = num_steps / 2;
		result = N * (N + 1);
	}
	else                        // odd
	{
		N = num_steps / 2;        
		result = (N * (N + 1)) + ceil(double(num_steps) / 2);
	}
	cout << result;


		
	return 0;
}



