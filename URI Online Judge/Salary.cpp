#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
    int A, B, NUMBER;
	  double C, SALARY;
	  cin >> A >> B;
	  cin >> fixed >> setprecision(2) >> C;
	  SALARY = B * C;
	  cout << "NUMBER = " << A << endl;
	  cout << fixed << setprecision(2) << "SALARY = U$ " << SALARY << endl;
 
    return 0;
}
