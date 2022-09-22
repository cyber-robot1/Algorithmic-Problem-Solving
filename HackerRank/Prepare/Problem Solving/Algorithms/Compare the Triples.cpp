/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/compare-the-triplets/problem
*/

#include <bits/stdc++.h>
using namespace std;

void compareTriplets(int a[], int b[], int n) {
    int sum_a=0, sum_b=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>b[i])
        sum_a++;
        else if(a[i]<b[i])
        sum_b++;
    }
    cout<<sum_a<<" "<<sum_b;    
}

int main()
{
    int a[100], b[100];
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<3; i++)
    {
        cin>>b[i];
    }
    compareTriplets(a, b, 3);

    return 0;
}
