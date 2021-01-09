#include <iostream>
using namespace std;
 
int main() {
 
        int A = 0;
	float N;
	for (int k = 1; k <= 6; k++)
	{
		cin >> N;
		if (N > 0)
			A++;
	}
	cout << A << " valores positivos" << endl;
 
    return 0;
}