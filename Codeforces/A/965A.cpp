/*
Author: Karim Tarek Ibrahim
Problem name: Paper Airplanes
Problem link: https://codeforces.com/problemset/problem/965/A
Date: 27/8/2022
*/

#include <iostream>
#include <cmath>
using namespace std;
 
 
int main()
{
	int k, n, s, p, t_sheets = 0, t_packs = 0;
	cin >> k >> n >> s >> p;
	t_sheets = k * ceil(double(n) / double(s));
	t_packs = ceil(double(t_sheets) / double(p));
	cout << t_packs;
 
	return 0;
}
