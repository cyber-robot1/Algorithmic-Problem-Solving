/*
Author: Karim Tarek Ibrahim
Problem name: Marks
Problem link: https://codeforces.com/problemset/problem/152/A
Date: 22/4/2023
*/

#include <iostream>
using namespace std;

char arr[101][101];
int student[101];
int main()
{
    
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];
    }

    int mx = 0, c = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[j][i] >= mx)
                mx = arr[j][i];
        }

        for (int j = 1; j <= n; j++)
        {
            if (arr[j][i] == mx)
                student[j]++;
        }
        mx = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (student[i] > 0)
            c++;
    }
    cout << c;

    return 0;
}
