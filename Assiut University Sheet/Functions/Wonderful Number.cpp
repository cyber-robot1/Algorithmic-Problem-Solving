/*
Author: Karim Tarek Ibrahim
*/


#include <iostream>
#include <algorithm>
using namespace std;
 
bool Odd(long long n)
{
    if (n % 2 != 0)
        return true;
    else
        return false;
}
 
bool PalindromeBin(int n)
{
    int bin[100], rev[100];
    int i = 0, size;
    bool flag = true;
    while (n != 0)
    {
        bin[i] = n % 2;
        rev[i] = n % 2;
        n = n / 2;
        i++;
    }
    size = i;
    reverse(rev, rev + size);
    for (int i = 0; i < size; i++)
    {
        if (bin[i] == rev[i])
            flag = true;
        else
        {
            flag = false;
            break;
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
    if (PalindromeBin(n) && Odd(n))
        cout << "YES";
    else
        cout << "NO";
 
 
    return 0;
}
