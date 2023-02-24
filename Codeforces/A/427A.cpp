/*
Author: Karim Tarek Ibrahim
Problem name: Police Recruits
Problem link: https://codeforces.com/problemset/problem/427/A
Date: 15/2/2023
*/

#include <iostream>
using namespace std;
 
int arr[100001];
 
int main()
{
    int n;
    int crime = 0, police = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
        {
            if (police == 0)
                crime++;
            else
                police--;
        }
        else if (arr[i] >= 1)
            police += arr[i];
    }
 
    cout << crime;
 
    return 0;
}
