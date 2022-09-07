/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
	int X, N;
	char S;
	cin >> S >> N;
	if (S == '+')
	{
		for (int i = 1; i <= N; i++)
		{
			cin >> X;
			for (int i = 1; i <= X; i++)
			{
				cout << "+";
			}
			cout << endl;
		}
	}
	else if (S == '-')
	{
		for (int i = 1; i <= N; i++)
		{
			cin >> X;
			for (int i = 1; i <= X; i++)
			{
				cout << "-";
			}
			cout << endl;
		}
	}
	else if (S == '*')
	{
		for (int i = 1; i <= N; i++)
		{
			cin >> X;
			for (int i = 1; i <= X; i++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	else if (S == '/')
	{
		for (int i = 1; i <= N; i++)
		{
			cin >> X;
			for (int i = 1; i <= X; i++)
			{
				cout << "/";
			}
			cout << endl;
		}
	}

	return 0;
}
