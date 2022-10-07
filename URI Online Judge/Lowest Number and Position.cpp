/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int arr[1000];
int main()
{
	int N;
	int mn_e, mn_p;        // (mn_e)=> minimum_element, (mn_p)=> position of minimum element.
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	mn_e = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < mn_e)
		{
			mn_e = arr[i];
			mn_p = i;
		}
	}
	cout << "Menor valor: " << mn_e << endl;
	cout << "Posicao: " << mn_p << endl;

	return 0;
}
