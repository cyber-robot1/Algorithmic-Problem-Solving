#include <iostream>
using namespace std;
int main()
{
    long long A, B, C, D, M;
    cin >> A >> B >> C >> D;
    if (A >= 2 && B >= 2 && C >= 2 && D >= 2)
    {
        int i = 0;
        M = (A * B * C * D);
        cout << M % 100;     // to print the last two digits of the number
    }
}

