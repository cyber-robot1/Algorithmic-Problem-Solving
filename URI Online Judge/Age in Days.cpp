#include <iostream>
using namespace std;
int main() {
         

        int N, Day, Month, Year;
	cin >> N;
	Year = N / 365;
	Month = (N - Year * 365) / 30;
	Day = N - (Year * 365 + Month * 30);
	cout << Year << " ano(s)" << endl << Month << " mes(es)" << endl << Day << " dia(s)" << endl;
     
     return 0; 

}