#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float n, a1, a2, a3, b1, b2, b3, A, B;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
	A = (a1 + a2 + a3) / 5;
	B = (b1 + b2 + b3) / 10;
  
	if (ceil(A) + ceil(B) <= n)
		cout << "YES";
	else
		cout << "NO";
	
 
	return 0;
}
