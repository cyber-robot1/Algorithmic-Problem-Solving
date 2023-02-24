/*
Author: Karim Tarek Ibrahim
Problem name: Is your horseshoe on the other hoof?
Problem link: https://codeforces.com/problemset/problem/228/A
Date: 8/2/2023
*/

#include <iostream>
using namespace std;

int arr[4];

int main()
{
    
    int c = 0, temp;

    for (int i = 0; i < 4; i++)
        cin >> arr[i];

    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
            temp = 1;
        else
            temp = 0;
        
        for (int j = temp; j < 4; j++)
        {
            if (i == j)
                continue;
            else
            {
                if (arr[i] == arr[j])
                {
                    c++;
                    arr[i] = 0;
                }
            }   
        }
    }
    cout << c;
    
    return 0;
}
