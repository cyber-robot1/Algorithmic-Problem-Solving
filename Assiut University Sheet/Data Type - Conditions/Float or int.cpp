#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long double N;
    cin >> fixed >> setprecision(3) >> N;
    if (N == int(N))
    {
        cout << "int " << N << endl;
    }
    else
    {
        cout << "float " << int(N) << " " << N - int(N) << endl;
    }    
}

