#include <iostream>
using namespace std;
int main()
{
    int A, B;
    long long C;
    char Q, S;
    cin >> A >> S >> B >> Q >> C;
    if (S == '+')
    {
        if ((A + B) == C)
            cout << "Yes" << endl;
        else
            cout << A + B << endl;
    }
    else if (S == '-')
    {
        if ((A - B) == C)
            cout << "Yes" << endl;
        else
            cout << A - B << endl;
    }
    else if (S == '*')
    {
        if ((A * B) == C)
            cout << "Yes" << endl;
        else
            cout << A * B << endl;
    }
    else if (S == '/')
    {
        if ((A / B) == C)
            cout << "Yes" << endl;
        else
            cout << A / B << endl;
    }
}

