/*
Author: Karim Tarek Ibrahim
Problem name: Anton and Polyhedrons
Problem link: https://codeforces.com/problemset/problem/785/A
Date: 20/10/2023
*/


#include <iostream>
using namespace std;
 
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t, c = 0;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		if (str == "Icosahedron")
			c += 20;
		else if (str == "Dodecahedron")
			c += 12;
		else if (str == "Octahedron")
			c += 8;
		else if (str == "Cube")
			c += 6;
		else if (str == "Tetrahedron")
			c += 4;
	}
	cout << c << endl;
 
	return 0;
}
