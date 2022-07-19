#include <iostream>
using namespace std;
int main()
{
    long long N, month, year, day;
    cin >> N;
    if (N > 0)
    {
        year = N / 365;
        month = (N - (365 * year)) / 30;
        day = (N - (365 * year)) - (30 * month);
    }
    else if (N == 0)
    {
        year = 0;
        month = 0;
        day = 0;
    }
    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days" << endl;
}
