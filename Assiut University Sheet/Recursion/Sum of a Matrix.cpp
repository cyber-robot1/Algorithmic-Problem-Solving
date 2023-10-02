/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
int A[101][101], B[101][101], C[101][101];

// Recursive function to sum two matrices and store result in a third one.
void f(int row, int col, int r, int c)
{
	if (c == col - 1)
	{
		C[r][c] = A[r][c] + B[r][c];
		c = 0;
		if (r == row - 1)
			return;
		else
			f(row, col, r + 1, c);
	}
	else
	{
		C[r][c] = A[r][c] + B[r][c];
		f(row, col, r, c + 1);
	}
}

// Recursive function to print a given matrix.
void print(int row, int col, int r, int c)
{
	if (c == col - 1)
	{
		cout << C[r][c];
		cout << endl;
		c = 0;
		if (r == row - 1)
			return;
		else
			print(row, col, r + 1, c);
	}
	else
	{
		cout << C[r][c] << " ";
		print(row, col, r, c + 1);
	}
}

int main()
{
	
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> A[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> B[i][j];
	}

	f(n, m, 0, 0);
	print(n, m, 0, 0);

	return 0;
}
