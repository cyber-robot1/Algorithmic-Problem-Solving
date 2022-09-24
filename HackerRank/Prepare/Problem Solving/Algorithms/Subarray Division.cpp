/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/the-birthday-bar/problem
*/

#include <iostream>
using namespace std;

int birthday(int s[], int n, int d, int m) {
    
    int sum = 0;         // (sum) => sum of elements of each subarray which equal to d.
    int c = 0;          // (c) => num of elements of each subarray which equal to m.
    int counter = 0;   // (counter) => num of valid subarrays.
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sum += s[k];
                c++;
            }
            if (m == c && d == sum)
                counter++;
            sum = 0;
            c = 0;
        }
    }
    return counter;
}

int main()
{
    int n, a[100], d, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> d >> m;

    cout << birthday(a, n, d, m);

	return 0;
}
