/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int sum(int x, int y)
{
    int sum = 0;
    sum = x + y;
    return sum;
}
 
int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b);
 
    return 0;
}
