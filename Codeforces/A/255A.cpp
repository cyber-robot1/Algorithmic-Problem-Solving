/*
Author: Karim Tarek Ibrahim
Problem name: Greg's Workout
Problem link: https://codeforces.com/problemset/problem/255/A
Date: 10/2/2023
*/

#include <iostream>
using namespace std;
 
int arr[21];
 
int main()
{
    int n, temp, i = 0, a = 0, b = 1, c = 2;
    int chest = 0, bicep = 0, back = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    temp = i;
    for (i = 0; i < n; i++)
    {
        if (temp == a)
            chest = chest + arr[i];
        else if (temp == b)
            bicep = bicep + arr[i];
        else if (temp == c)
            back = back + arr[i];
        
        temp++;
        
        if (temp > 2)
            temp = 0;
    }
 
    if (chest >= back && chest >= bicep)
        cout << "chest";
    else if (bicep >= chest && bicep >= back)
        cout << "biceps";
    else if (back >= chest && back >= bicep)
        cout << "back";
    
    return 0;
}
