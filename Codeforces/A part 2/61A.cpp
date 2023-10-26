/*
Author: Karim Tarek Ibrahim
Problem name: Ultra-Fast Mathematician
Problem link: https://codeforces.com/problemset/problem/61/A
Date: 26/10/2023
*/

#include <iostream>
using namespace std;
 
char answer[101];
int main()
{
	string str, z;
	cin >> str >> z;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == z[i])
			answer[i] = '0';
		else
			answer[i] = '1';
	}
	for (int i = 0; i < str.size(); i++)
		cout << answer[i];
 
	return 0;
}


