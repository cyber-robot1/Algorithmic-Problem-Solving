/*
Author: Karim Tarek Ibrahim
Problem name: Fox And Snake
Problem link: https://codeforces.com/problemset/problem/510/A
Date: 16/2/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
    
    int n, m;
    cin >> n >> m;
    /*
    if(flag==true)  => print: . . . #
 
    if(flag==false) => print: # . . .
    */
    bool flag = true;
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 0)
            {
                if (flag == true)
                {
                    if (j == m)
                    {
                        cout << "#";
                        flag = false;
                    }
                    else
                        cout << ".";
                }
                else
                {
                    if (j == 1)
                        cout << "#";
                    else
                        cout << ".";
                    if (j == m)
                        flag = true;
                }
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }
 
 
    return 0;
}
