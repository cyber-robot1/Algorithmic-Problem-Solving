#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    if (N == 0)
        cout << 0;
    else if (N == 1)
        cout << -1;
    else
    {
        for (int i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
                cout << i << endl;
        }
    }
   
    return 0;
}
