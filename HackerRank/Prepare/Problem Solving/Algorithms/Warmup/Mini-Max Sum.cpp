/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/mini-max-sum/problem
Date: 18/9/2022
*/

#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(long long arr[]) {
    long long mn=0, mx=0;
    bool flag_mn=true, flag_mx=true;
    for(int i=0; i<5; i++)
    {
        long long sum=0;
        for(int j=0; j<5; j++)
        {
            sum+=arr[j];
        }
        sum-=arr[i];
        if(flag_mn)
        {
            mn=sum;
            flag_mn=false;
        }
        if(sum<mn)
        mn=sum;
        if(flag_mx)
        {
            mx=sum;
            flag_mx=false;
        }
        if(sum>mx)
        mx=sum;
    }
    cout<<mn<<" "<<mx;
}

int main()
{
    long long A[5];
    for(int i=0; i<5; i++)
    {
        cin>>A[i];
    }
    miniMaxSum(A);
    

    return 0;
}
