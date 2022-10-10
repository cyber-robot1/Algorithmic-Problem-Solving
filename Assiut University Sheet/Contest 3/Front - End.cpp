/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int arr[100003];
 
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    int first = 0, last = n;
 
    while (first < last)
    {
        if (last - first == 1)
            cout << arr[first];
        else
        {
            for (int j = first; j < last; j++)
            {
                cout << arr[first] << " " << arr[last - 1];
                break;
            }
            cout << " ";
        }
        first++;
        last--;
    }
 
    return 0;
}
