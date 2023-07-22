/*
Author: Karim Tarek Ibrahim
Problem name: Way Too Long Words
Problem link: https://codeforces.com/problemset/problem/71/A
Date: 22/7/2023
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
	
	int n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		int size = s.length();
		string Size = to_string(size - 2);
		if (size > 10)
		{
			s.replace(1, s.length() - 2, Size);
			cout << s << endl;
		}
		else
			cout << s << endl;
 
	}
	
 
	return 0;
}
