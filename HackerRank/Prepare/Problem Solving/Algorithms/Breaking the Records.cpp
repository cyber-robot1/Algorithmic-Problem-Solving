/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
*/

#include <iostream>
using namespace std;

void breakingRecords(int scores[], int n) 
{
    int Min = 0, Max = 0, Minimum = 0, Maximum = 0;
    Maximum = scores[0];
    Minimum = scores[0];
    for (int i = 1; i < n; i++)
    {
        if (scores[i] > Maximum)
        {
            Maximum = scores[i];
            Max++;
        }
        else if (scores[i] < Minimum)
        {
            Minimum = scores[i];
            Min++;
        }
    }
    cout << Max << " " << Min;
}

int main()
{
    int n, scores[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    breakingRecords(scores, n);

	return 0;
}
