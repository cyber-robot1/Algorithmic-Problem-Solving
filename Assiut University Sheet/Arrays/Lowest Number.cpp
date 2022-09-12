/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
    
    long long n, arr[1000], min = 0, pos;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }
    cout << min << " " << pos+1;
    
    
    return 0;
}

