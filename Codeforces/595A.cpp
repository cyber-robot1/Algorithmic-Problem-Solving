/*
Author: Karim Tarek Ibrahim
Problem name: Vitaly and Night
Problem link: https://codeforces.com/problemset/problem/595/A
Date: 8/2/2023
*/

#include <iostream>
using namespace std;
 
int arr[100][200];
 
int main()
{
    /*
    (n)=> No. of floors
    (m)=> No. of flats in each floor
    (c)=> counter variable "No. of non-sleeping flats"
    */
    int n, m, c = 0;
    cin >> n >> m;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m * 2; j++)
            cin >> arr[i][j];
    }
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m * 2; j += 2)
        {
            if (arr[i][j] == 1 || arr[i][j + 1] == 1 || arr[i][j] == 1 && arr[i][j + 1] == 1)
                c++;
        }
    }
    cout << c;
    
    return 0;
}
