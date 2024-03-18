/*
Author: Karim Tarek Ibrahim
Problem name: Grasshopper And the String
Problem link: https://codeforces.com/problemset/problem/733/A
Date: 18/3/2024
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    cin >> str;
 
    vector<int> v;
    int c = 0;
    for (int i = 0; i < str.size(); i++)
    {
        c++;
        bool con = (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y');
        if (con)
        {
            v.push_back(c);
            c = 0;
        }
    }
    c++;
 
    if (v.empty())
        cout << c;
    else
        cout << max(c, *max_element(v.begin(), v.end()));
    
    return 0;
}
