/*
Author: Karim Tarek Ibrahim
Problem name: Expression
Problem link: https://codeforces.com/problemset/problem/479/A
Date: 19/3/2024
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a + b * c);
    v.push_back(a * (b + c));
    v.push_back(a * b * c);
    v.push_back((a + b) * c);
    v.push_back(a + b + c);
    cout << *max_element(v.begin(), v.end());
    
    return 0;
}

