/*
Author: Karim Tarek Ibrahim
Problem name: Pineapple Incident
Problem link: https://codeforces.com/problemset/problem/697/A
Date: 15/3/2024
*/

#include <iostream>
using namespace std;
 
int main()
{
    int t, s, x, compare = 0;
    cin >> t >> s >> x;
 
    if (x == t)
        cout << "YES";
    else if (x < t)
        cout << "NO";
    else
    {
        int k = 1, f = 0;
        while (true)
        {
            if (f == 0)
            {
                compare = t + (k * s);
                f++;
            }
            else
            {
                compare = t + (k * s) + 1;
                f = 0;
                k++;
            }
 
            if (x == compare)
            {
                cout << "YES";
                break;
            }
            else if (x < compare)
            {
                cout << "NO";
                break;
            }
        }
    }
    
    return 0;
}
