#include <iostream>
using namespace std;

int main()
{

	long long N, M;
	int pos = 0, neg = 0, even = 0, odd = 0; // flag variables
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> M;
		if (M % 2 == 0)
			even++;
		else if (M % 2 != 0)
			odd++;
		if (M > 0)
			pos++;
		else if (M < 0)
			neg++;
	}
	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;
	cout << "Positive: " << pos << endl;
	cout << "Negative: " << neg << endl;


    return 0;
}
