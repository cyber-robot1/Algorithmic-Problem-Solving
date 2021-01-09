#include <iostream>
using namespace std;
 
int main() {
 
   	int N, Hours, Minutes, Seconds;
	cin >> N;
	Hours = N / 3600;
	Minutes = (N - Hours * 3600) / 60;
	Seconds = N - (Hours * 3600 + Minutes * 60);
	cout << Hours << ":" << Minutes << ":" << Seconds << endl;
 
    return 0;
}