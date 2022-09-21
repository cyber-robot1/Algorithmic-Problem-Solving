/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/a-very-big-sum/problem
*/

#include <bits/stdc++.h>
using namespace std;

long aVeryBigSum(long ar[], int n) {
    long sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+ar[i];
    }
    return sum;
}

int main()
{
    long n, ar[10000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    cout<<aVeryBigSum(ar, n);
   
    return 0;
}
