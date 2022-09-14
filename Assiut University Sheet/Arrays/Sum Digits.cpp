/*
Author: Karim Tarek Ibarhim
*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    char a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i] - 48;
    }
    cout << sum;


    return 0;
}
