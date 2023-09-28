/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
void f(int n)
{
	if (n == 0)
		return;
	if (n == 1)
		cout << n;
	else
		cout << n << " ";
	f(n - 1);
}
 
int main()
{
	
	int N;
	cin >> N;
	f(N);
 
	return 0;
}
