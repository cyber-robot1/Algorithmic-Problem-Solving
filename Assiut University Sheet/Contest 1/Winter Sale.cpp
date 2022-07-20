#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long double X, P, Answer;
	cin >> X >> P;
	Answer = P / (1 - (X / 100));
	cout << fixed << setprecision(2) << Answer << endl;
}
