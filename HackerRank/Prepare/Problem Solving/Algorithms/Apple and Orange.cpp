/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/apple-and-orange/problem
*/

#include <bits/stdc++.h>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, int apples[], int oranges[], int m, int n) {
    int sum_a=0, sum_o=0;
    for(int i=0; i<m; i++)
    {
        apples[i]+=a;
    }   
    
    for(int i=0; i<n; i++)
    {
        oranges[i]+=b;
    }
    for(int i=0; i<m; i++)
    {
        if(apples[i]>=s && apples[i]<=t)
        sum_a++;
    }
    for(int i=0; i<n; i++)
    {
        if(oranges[i]>=s && oranges[i]<=t)
        sum_o++;
    }
    cout<<sum_a<<endl;
    cout<<sum_o;
}

int main()
{
    int s,t,a,b,m,n;
    int apples[100000], oranges[100000];
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        cin>>apples[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>oranges[i];
    }
    
    countApplesAndOranges(s, t, a, b, apples, oranges, m, n);

    return 0;
}
