/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include <cmath>
using namespace std;
 
bool isPrime(int n)                      // Check if the given number is prime or not.
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
 
bool isPalindrome(int n)                  // Check if the given number is palindrome or not.
{
    int digit, rev_n = 0, temp;
    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        temp = temp / 10;
        rev_n = (rev_n * 10) + digit;
    }
    if (n == rev_n)
        return true;
    else
        return false;
}
 
int numofDivisors(int n)                 // Number of divisors of a given number.
{
    int c = 0;                    // (c)=> counter to count the number of divisors of a given number.
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    return c;
}
 
void MaxinArray(int arr[], int n)          // Maximum number in a given array.
{
    int mx = 0;
    mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    cout << "The maximum number : " << mx;
}
 
void MininArray(int arr[], int n)           // Minimum number in a given array.
{
    int mn;
    mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn)
            mn = arr[i];
    }
    cout << "The minimum number : " << mn;
}
 
void NumofPrimes(int arr[], int n)                // Number of prime numbers in a given array.
{
    int c = 0;                      // (c)=> counter to count the prime elements in a given array.
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
            c++;
    }
    cout << "The number of prime numbers : " << c;
}
 
void NumofPalindromes(int arr[], int n)             // Number of palindrome numbers in a given array.
{
    int c = 0;                  // (c)=> counter to count the palindrome elements in a given array.
    for (int i = 0; i < n; i++)
    {
        if (isPalindrome(arr[i]))
            c++;
    }
    cout << "The number of palindrome numbers : " << c;
}
 
void MaxNumofDivisors(int arr[], int n)           // Number of divisors of each element in a given array.
{
    int mx_div, mx_element;
    mx_div = numofDivisors(arr[0]);
    mx_element = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (numofDivisors(arr[i]) > mx_div)
        {
            mx_div = numofDivisors(arr[i]);
            mx_element = arr[i];
        }
        else if (numofDivisors(arr[i]) == mx_div)
        {
            if (arr[i] > mx_element)
                mx_element = arr[i];
        }
    }
    cout << "The number that has the maximum number of divisors : " << mx_element;
}
 
int arr[104];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    MaxinArray(arr, n);
    cout << endl;
    MininArray(arr, n);
    cout << endl;
    NumofPrimes(arr, n);
    cout << endl;
    NumofPalindromes(arr, n);
    cout << endl;
    MaxNumofDivisors(arr, n);
   
 
    return 0;
}
