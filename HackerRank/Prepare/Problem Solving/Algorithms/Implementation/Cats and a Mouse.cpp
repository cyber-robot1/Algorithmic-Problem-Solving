/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
*/

#include <bits/stdc++.h>
using namespace std;

string catAndMouse(int x, int y, int z) {
    if (abs(x - z) < abs(y - z))
        return "Cat A";
    else if (abs(x - z) > abs(y - z))
        return "Cat B";
    else
        return "Mouse C";
}

int main()
{
    int x, y, z, t;        //(x)=> position of cat A, (y)=> position of cat B, (z)=> position of Mouse C.
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        cout << catAndMouse(x, y, z) << endl;
    }

    return 0;
}
