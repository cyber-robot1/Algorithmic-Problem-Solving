/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include <iomanip>
using namespace std;

void avg(double arr[], int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
        sum = sum + arr[i];
    cout << fixed << setprecision(7) << sum / n;
}

double arr[10000];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    avg(arr, n);


    return 0;
}
