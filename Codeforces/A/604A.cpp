/*
Author: Karim Tarek Ibrahim
Problem name: Uncowed Forces
Problem link: https://codeforces.com/problemset/problem/604/A
Date: 16/4/2023
*/

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
 
int main()
{
 
    double m1, m2, m3, m4, m5;
    double w1, w2, w3, w4, w5;
    double hs, hu;
    double s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;                // score of each problem
    double hs_p = 0, hu_p = 0;                                   // total points of successful and non-successful hacks
    double total = 0;                                           // total final score
    //int temp1, temp2, temp3, temp4, temp5;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    cin >> w1 >> w2 >> w3 >> w4 >> w5;
    cin >> hs >> hu;
    
    s1 = max((0.3*500), ((1 - m1 / 250) * 500 - 50 * w1));
    s2 = max((0.3*1000), ((1 - m2 / 250) * 1000 - 50 * w2));
    s3 = max((0.3*1500), ((1 - m3 / 250) * 1500 - 50 * w3));
    s4 = max((0.3*2000), ((1 - m4 / 250) * 2000 - 50 * w4));
    s5 = max((0.3*2500), ((1 - m5 / 250) * 2500 - 50 * w5));
 
    hs_p = hs * 100;
    hu_p = hu * 50;
 
    total = (s1 + s2 + s3 + s4 + s5) + hs_p - hu_p;
    cout << total;
 
 
    return 0;
}
