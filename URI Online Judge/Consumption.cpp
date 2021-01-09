#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
        int X;
	float Y, avg_consumption;
	cin >> X;
	cin >> fixed >> setprecision(1) >> Y;
	avg_consumption = X / Y;
	cout << fixed << setprecision(3) << avg_consumption << " " << "km/l" << endl;
 
    return 0;
}