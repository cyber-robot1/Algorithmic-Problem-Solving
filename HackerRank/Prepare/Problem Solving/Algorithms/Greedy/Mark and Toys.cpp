/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/mark-and-toys/problem 
*/

#include <bits/stdc++.h>
using namespace std;

int maximumToys(int prices[], int n, int k) {
    int sum = 0, c = 0, temp = 0;
    sort(prices, prices + n);
    for (int i = 0; i < n; i++)
    {
        if (prices[i] > k)
            break;
        else
        {
            sum = sum + prices[i];
            if (sum < k)
            {
                c++;
                temp = sum;
            }
            else
                break;
        }
    }
    return c;
}

int arr[100005];
int main()
{
  
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << maximumToys(arr, n, k);

        return 0;
}
