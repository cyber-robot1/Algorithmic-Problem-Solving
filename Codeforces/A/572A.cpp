/*
Author: Karim Tarek Ibrahim
Problem name: Arrays
Problem link: https://codeforces.com/problemset/problem/572/A
Date: 17/4/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int A[100005], B[100005];
int main()
{
    int nA, nB, k, m;
    bool flag = true;
    cin >> nA >> nB;
    cin >> k >> m;
    for (int i = 0; i < nA; i++)
        cin >> A[i];
    for (int i = 0; i < nB; i++)
        cin >> B[i];
    
    sort(A, A + nA);
    sort(B, B + nB);
    reverse(B, B + nB);
 
    if (A[k - 1] < B[m - 1])
        flag = true;
    else
        flag = false;
 
    if (flag)
        cout << "YES";
    else
        cout << "NO";
 
 
    return 0;
}
