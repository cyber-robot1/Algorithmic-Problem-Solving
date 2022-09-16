/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{

    int A, B, n;
    string s;
    bool flag = false;
    cin >> A >> B;
    n = A + B + 1;
    cin >> s;
    
    if (n == s.size())
    {
        if (s[A] == '-')
        {
            for (int i = 0; i < n; i++)
            {
                if (i == A)
                    continue;

                if ((s[i] - 48) >= 0 && (s[i] - 48) <= 9)
                    flag = true;
                else
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    else
        flag = false;
    
    if (flag)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
