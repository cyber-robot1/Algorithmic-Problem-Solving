#include <iostream>
using namespace std;
int main()
{
    long long A, B, C, min, mid, max;
    cin >> A >> B >> C;
    
    // to get the max number
    max = A;
    if (B > A && B >= C)
        max = B;
    else if (C > A && C >= B)
        max = C;
    
    // to get the min number
    min = A;
    if (B < A && B <= C)
        min = B;
    else if (C < A && C <= B)
        min = C;
    
    // to get the mid number
    mid = A;
    if ((B > A && B < C) || (B<A && B>C))
        mid = B;
    else if ((C > A && C <= B) || (C < A && C >= B))
        mid = C;

    cout << min << endl;
    cout << mid << endl;
    cout << max << endl;
    cout << endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
}

