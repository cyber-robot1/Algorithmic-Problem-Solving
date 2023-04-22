/*
Author: Karim Tarek Ibrahim
Problem name: Asphalting Roads
Problem link: https://codeforces.com/problemset/problem/583/A
Date: 22/4/2023
*/

#include <iostream>
using namespace std;

int h[51], v[51], days[51];
int main()
{
    
    int n;
    cin >> n;
    for (int i = 0, j = 1; i < n; i++, j++)
    {
        h[i] = j;
        v[i] = j;
    }

    int index = 0, size = 0;
    int H, V;
    for (int d = 1; d <= n * n; d++)
    {
        cin >> H >> V;
        for (int i = 0; i < n; i++)
        {
            if (H == h[i])
            {
                for (int j = 0; j < n; j++)
                {
                    if (V == v[j])
                    {
                        if (d == 1)
                        {
                            h[i] = -1;
                            v[j] = -1;
                            days[index] = d;
                            size++;
                            index++;
                        }
                        else
                        {
                            if (h[i] != -1 && v[j] != -1)
                            {
                                h[i] = -1;
                                v[j] = -1;
                                days[index] = d;
                                size++;
                                index++;
                            }
                        }
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < size; i++)
        cout << days[i] << " ";

    return 0;
}
