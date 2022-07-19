#include <iostream>
using namespace std;
int main()
{
    long long A, B, C, min, max;
    cin >> A >> B >> C;
    max = A;
    if (B >= A && B >= C)
        max = B;
    else if (C >= A && C >= B)
        max = C;
    min = A;
    if (B <= A && B <= C)
        min = B;
    else if (C <= A && C <= B)
        min = C;
    cout << min << " " << max << endl;
}
