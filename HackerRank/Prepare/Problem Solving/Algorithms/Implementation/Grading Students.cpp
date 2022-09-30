/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/grading/problem
*/

#include <bits/stdc++.h>
using namespace std;

int getM(int n)          // function to get the next multiple of 5 of a given number.
{
    int m = 0;
    for (int i = 0; i <= 100; i += 5)
    {
        if (n >= i && n < i + 5)
            m = i + 5;
    }
    return m;
}

int gradingStudents(int grades[], int n, int x) {
    int output = 0;
    int m = getM(x);
    if (x < 38)
        output = x;
    else
    {
        if (m - x < 3)
            output = m;
        else
            output = x;
    }
    return output;
}

int main()
{
    int n, arr[60];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << gradingStudents(arr, n, arr[i]) << endl;
    }
    

    return 0;
}
