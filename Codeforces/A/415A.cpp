/*
Author: Karim Tarek Ibrahim
Problem name: Mashmokh and Lights
Problem link: https://codeforces.com/problemset/problem/415/A
Date: 21/2/2023
*/

#include <iostream>
using namespace std;
 
int buttons[101], lights[101];
 
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> buttons[i];
 
    for (int i = 1; i <= n; i++)
        lights[i] = 0;
 
    for (int i = 0; i < m; i++)
    {
        for (int j = buttons[i]; j <= n; j++)
        {
            if (lights[j] == 0)
                lights[j] = buttons[i];
            else
                continue;
        }
    }
 
    for (int i = 1; i <= n; i++)
        cout << lights[i] << " ";
 
 
    return 0;
}
