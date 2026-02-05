#include <iostream>
using namespace std;

void printDigits(int num)
{
    if (num / 10 == 0)
    {
        cout << num;
        return;
    }
    printDigits(num / 10);
    cout << " " << num % 10;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        printDigits(n);
        cout << endl;
    }

    return 0;
}
