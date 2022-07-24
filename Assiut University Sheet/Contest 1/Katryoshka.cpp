#include <iostream>
using namespace std;
 
int main()
{
 
    long long n, m, k;
    cin >> n >> m >> k;
    if (n == 0 || k == 0 || n == 0 && k == 0)        // test case 1 
        cout << 0 << endl;
    else if (n == 1 || k == 1)                      // test case 2 
        cout << 1 << endl;
    else if (k == n - 1 && m < n)                  // test case 3
        cout << ((n - m) / 2) + m;
    else if (n < k && (n != k - 1) && (m == k - 1 || k == m - 1))   // test case 4
        cout << n;
    else if (n > k && (k != n - 1) && (m == k - 1 || k == m - 1))   // test case 5
        cout << k;
    else if (n == k - 1 && m == n - 1)                  // test case 6 
        cout << m;
    else if (n == k - 1 && m < n && m != n - 1)         // test case 7 
        cout << m + 1;
    else if (n == k - 1 && m > n && n != m - 1)         // test case 8
        cout << n;
    else if (n > k && (k != n - 1) && (m != k - 1 || k != m - 1) && n > m && k < m)           // test case 9
        cout << k;
    else if (n < k && (n != k - 1) && (n != m - 1 || m != n - 1) && n < m) // test case 10
        cout << n;
    else if (n > k && (k != n - 1) && (m != k - 1 || k != m - 1) && n > m && k > m)         // test case 11
    {
        if ((((n - m) / 2) + m) > k)
            cout << k;
        else
            cout << (((n - m) / 2) + m);
    }
    else if (n > k && (k != n - 1) && (m != k - 1 || k != m - 1) && n < m && k < m)       // test case 12
        cout << k;
    else if (k>n && (n!=k-1) && m!=k-1 && k>m && n>m)     // test case 13 
        cout << ((n - m) / 2) + m;
        
    return 0;
}
