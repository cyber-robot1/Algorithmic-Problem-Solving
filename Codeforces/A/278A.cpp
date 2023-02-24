/*
Author: Karim Tarek Ibrahim
Problem name: Circle Line
Problem link: https://codeforces.com/problemset/problem/278/A
Date: 18/2/2023
*/

#include <iostream>
using namespace std;
 
int Min(int num1, int num2)
{
    int mn = 0;
    if (num1 <= num2)
        mn = num1;
    else
        mn = num2;
    
    return mn;
}
 
int Max(int num1, int num2)
{
    int mx = 0;
    if (num1 >= num2)
        mx = num1;
    else
        mx = num2;
 
    return mx;
}
 
int d[101];
 
int main()
{
    int n, t, s;
    int mn = 0, mx = 0;
    int forward_c = 0, reverse_c = 0, min_path = 0;
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> d[i];
    cin >> s >> t;
    
    mn = Min(s, t);
    mx = Max(s, t);
 
    
    // Calculating distance of forward path
    for (int i = mn; i < mx; i++)
        forward_c = forward_c + d[i];
    
    
    // Calculating distance of reverse path
    int i = mn - 1;
    
    while (true)
    {
        if (i == mx)
        {
            reverse_c = reverse_c + d[i];
            break;
        }
        else
        {
            if (i == 0)
            {
                i = n;
                if (i == mx)
                {
                    reverse_c = reverse_c + d[i];
                    break;
                }
                else
                    reverse_c = reverse_c + d[i];
            }
            else
                reverse_c = reverse_c + d[i];
        }
        i--;
    }
 
    min_path = Min(forward_c, reverse_c);
    cout << min_path;
 
 
    return 0;
}
