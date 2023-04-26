/*
Author: Karim Tarek Ibrahim
Problem name: Bear and Raspberry
Problem link: https://codeforces.com/problemset/problem/385/A
Date: 26/4/2023
*/

#include <iostream>
using namespace std;
 
int arr[101];
int main()
{
    
    int n, c;
    bool flag = true;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    int mx = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 2)
        {
            temp = arr[i] - arr[i + 1] - c;
            if (temp >= mx)
                mx = temp;
            break;
        }
        else
        {
            if (flag)
            {
                mx = arr[i] - arr[i + 1] - c;
                flag = false;
            }
            else
            {
                temp = arr[i] - arr[i + 1] - c;
                if (temp >= mx)
                    mx = temp;
            }
        }
    }
    
    if (mx < 0)
        mx = 0;
    
    cout << mx;
 
    return 0;
}
