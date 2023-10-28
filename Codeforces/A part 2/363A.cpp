/*
Author: Karim Tarek Ibrahim
Problem name: Soroban
Problem link: https://codeforces.com/problemset/problem/363/A
Date: 28/10/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	string arr[10] = { "O-|-OOOO","O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-","-O|-OOOO","-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-" };
	int n; cin >> n;
	if (n == 0)
		cout << arr[0];
	else
	{
		while (n != 0)
		{
			int digit = n % 10;
			cout << arr[digit] << endl;
			n /= 10;
		}
	}
 
	return 0;
}
