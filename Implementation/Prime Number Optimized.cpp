/*
Author: Karim Tarek Ibrahim
*/
// this is an optimized function to check if the given number is prime or not.

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
        /*
        (sqrt(n))=> for optimization and reducing loop complexity, as we don't have to loop on all numbers till the given
        number, it's enough to check if the given number is divisible by the prime factors only like (2,3,,5,7,....)
        so we only check the numbers from 2 to the square root of the given number skipping 1 & the given number itself.
        */
        
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

    int n;
    cin >> n;
    cin >> n;
    if (isPrime(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
        
  
    return 0;
}
