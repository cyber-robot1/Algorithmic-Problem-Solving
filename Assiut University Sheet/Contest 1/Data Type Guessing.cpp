#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double n, k, a, T;
    cin >> n >> k >> a;
    T = ((n * k) / a);
    if (ceil(T) == floor(T))          // to check if the number is double or integer
    {
        if (T >= -2147483648 && T <= 2147483647)
            cout << "int" << endl;
        else if (T > 2147483647)
            cout << "long long" << endl;
    }
    else
        cout << "double" << endl;

    return 0;
}
