/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include <cmath>
using namespace std;
 
bool isPrime(int n)
{
    bool flag = true;
    if (n == 1 || n == 0)
        flag = false;
    
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        return true;
    else
        return false;
}
 
int main()
{
 
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (isPrime(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
 
    return 0;
}
