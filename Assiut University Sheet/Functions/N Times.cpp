/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
    int n, t;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        for (int i = 0; i < n; i++)
            cout << c << " ";
        cout << endl;

    }


    return 0;
}
