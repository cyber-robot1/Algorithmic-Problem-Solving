/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << x << " " << y;
}
 
int main()
{
 
    int x, y;
    cin >> x >> y;
    swap(x, y);
    
 
    return 0;
}
