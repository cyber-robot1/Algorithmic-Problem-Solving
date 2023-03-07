/*
Author: Karim Tarek Ibrahim
Problem name: Dima and Friends
Problem link: https://codeforces.com/problemset/problem/272/A
Date: 7/3/2023
*/

#include <iostream>
using namespace std;

int arr[101];

int main()
{
    
    int n, total_fingers = 0, c = 0, temp = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        temp += arr[i];

    total_fingers = temp;

    for (int i = 1; i <= 5; i++)
    {
        total_fingers += i;
      
        int z = 1;
      
        for (int k = 1; k <= total_fingers; k++)
        {
            if (z == (n + 1) + 1)
                z = 1;

            if (k == total_fingers)
                break;
            
            else
                z++;
        }

        if (z != 1)
            c++;
        
        total_fingers = temp;
    }
    cout << c;

    return 0;
}
