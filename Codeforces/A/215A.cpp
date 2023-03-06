/*
Author: Karim Tarek Ibrahim
Problem name: Bicycle Chain
Problem link: https://codeforces.com/problemset/problem/215/A
Date: 4/3/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr1[51], arr2[51], arr3[2501];
 
int main() {
    
    int n, m, mx = 0, index = 0, freq = 0, mx_index = 0;
    bool flag = true;
    cin >> n;
    for(int i = 0; i<n; i++)
    cin>>arr1[i];
    cin>>m;
    for(int i=0; i<m; i++)
    cin>>arr2[i];
    
    int k=0;
    for(int i=0; i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr2[i]%arr1[j]==0)
            {
                arr3[k]=arr2[i]/arr1[j];
                index++;
                k++;
            }
        }
    }
    sort(arr3, arr3+index);
    mx=arr3[index-1];
    mx_index=index-1;
    
    for(int i=0; i<index; i++)
    {
        if(arr3[i]==mx)
            freq++;
    }
    
    cout<<freq;
    
 
    return 0;
}
