/*
Author: Karim Tarek Ibrahim
Problem name: Mishka and Game
Problem link: https://codeforces.com/problemset/problem/703/A
Date: 12/9/2022
*/

#include <iostream>
using namespace std;

int main()
{
    
    int n, m, c, C_m = 0, C_c = 0;       //C_m = Mishka's winning counter, C_c = Chris's winning counter
    cin >> n;
    while (n--) {
        cin >> m >> c;
        if (m > c)
            C_m++;
        else if (c > m)
            C_c++;
    }
    if (C_m > C_c)
        cout << "Mishka";
    else if (C_c > C_m)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";

    

    return 0;
}


