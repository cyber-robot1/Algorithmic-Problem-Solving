#include <iostream>
using namespace std;
int main()
{
    int A;
    cin >> A;
    while (A>=10)
    {
        A = A / 10;
    }
    if (A % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;
}
