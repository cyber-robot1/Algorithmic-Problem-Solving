#include <iostream>
using namespace std;

void print(int size, int arr[])
{
	if (size == 0)
		return;

	if ((size - 1) % 2 == 0)
		cout << arr[size - 1] << " ";

	print(size - 1, arr);
}

int main()
{
	int a[1000], n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	print(n, a);	
	
	return 0;
}
