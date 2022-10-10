/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

void print(int a)
{
    for (int i = 1; i <= a; i++)
        if (i == a)                      // to avoid printing a blank space.
            cout << i;
        else
            cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    print(n);


    return 0;
}
