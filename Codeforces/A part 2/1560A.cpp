/*
Author: Karim Tarek Ibrahim
Problem name: Dislike of Threes
Problem link: https://codeforces.com/problemset/problem/1560/A
Date: 16/2/2024
*/

#include <bits/stdc++.h>
using namespace std;
 
void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int main()
{
    fastIO();
    vector<int> v;
    for (int i = 1, j = 1; i <= 1000;)
    {
        bool con1 = (j % 3 == 0);
        bool con2 = (j % 10 == 3);
        bool con3 = ((j % 3 == 0) && (j % 10 == 3));
        if (con1 || con2 || con3)
            j++;
        else
        {
            v.push_back(j);
            i++;
            j++;
        }
    }
    
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << v[k - 1] << endl;
    }
 
    return 0;
}
