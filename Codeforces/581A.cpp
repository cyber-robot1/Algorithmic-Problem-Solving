/*
Author: Karim Tarek Ibrahim
Problem name: Vasya the Hipster
Problem link: https://codeforces.com/problemset/problem/581/A
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int m_d = 0, m_s = 0;    // m_d = max num of different socks, m_s = max num of same socks.
	cin >> a >> b;
	if (a == 1)
	{
		m_d = 1;
		m_s = (b - 1) / 2;
		cout << m_d << " " << m_s;
	}
	else if (b == 1)
	{
		m_d = 1;
		m_s = (a - 1) / 2;
		cout << m_d << " " << m_s;
	}
	else
	{
		while (a != 0 && b != 0)
		{
			a = a - 1;
			b = b - 1;
			m_d++;
		}
		if (a > b)
			m_s = a / 2;
		else
			m_s = b / 2;
		cout << m_d << " " << m_s;
	}


	return 0;
}
