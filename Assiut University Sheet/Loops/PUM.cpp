/*
Author: Karim Tarek Ibrahim 
*/

#include <iostream>
using namespace std;
 
int main()
{
	
	int N;
	cin >> N;
	for (int i = 1, j = 1; i <= N; i++, j += 4)
	{
		cout << j << " " << (j + 1) << " " << (j + 2) << " " << "PUM" << endl;
	}
	
	
 
	return 0;
}
