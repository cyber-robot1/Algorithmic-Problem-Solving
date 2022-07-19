#include <iostream>
using namespace std;
int main()
{
    char X;
    cin >> X;
    if (int(X) >= 65 && int(X) <= 90) // Capital alphabet
    {
        X = X + 32;
    }
    else if (int(X) >= 97 && int(X) <= 122) // Small alphabet
    {
        X = X - 32;
    }
    cout << X << endl;
}
