/*
Author: Karim Tarek Ibrahim
*/


#include <iostream>
using namespace std;
 
void f(int n)
{
	if (n == 0)
		return;
	else
		cout << "I love Recursion" << endl;
	f(n - 1);
}
 
int main()
{
	
	int N;
	cin >> N;
	f(N);
 
	return 0;
}
