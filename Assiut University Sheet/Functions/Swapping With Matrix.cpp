/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
const int n = 503;
 
void Swap(int arr[n][n], int n, int x, int y)
{
    
    for (int j = 1; j <= n; j++)        // swapping rows
       swap(arr[x][j], arr[y][j]);
 
    for (int i = 1; i <= n; i++)       // swapping columns
        swap(arr[i][x], arr[i][y]);
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
 
int arr[503][503];
 
int main()
{
   
    int n, x, y;          
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> arr[i][j];
    }
    Swap(arr, n, x, y);
 
 
    return 0;
}
