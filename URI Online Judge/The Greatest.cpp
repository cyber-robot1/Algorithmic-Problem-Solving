#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
 
        int a, b, c, max;
	cin >> a >> b >> c;
	max = (a + b + abs(a - b)) / 2;
	max = (max + c + abs(max - c)) / 2;
	cout << max << " " << "eh o maior" << endl;
 
    return 0;
}
