/*
Author: Karim Tarek Ibrahim
Problem Name: Contest
Problem link: https://codeforces.com/problemset/problem/501/A
Date: 6/9/2022
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
	int a, b, c, d;
	int max_Misha = 0, max_Vasya = 0;
	cin >> a >> b >> c >> d;
	max_Misha = max(((3 * a) / 10), (a - ((a / 250) * c)));
	max_Vasya = max(((3 * b) / 10), (b - ((b / 250) * d)));
	if (max_Misha > max_Vasya)
		cout << "Misha";
	else if (max_Vasya > max_Misha)
		cout << "Vasya";
	else
		cout << "Tie";

	return 0;
}
