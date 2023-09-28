/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
void f(int n)
{
	if (n == 0)
		return;
	f(n - 1);
	cout << n << endl;
}
 
int main()
{
	
	int N;
	cin >> N;
	f(N);
 
	return 0;
}
