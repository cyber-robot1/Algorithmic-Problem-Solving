#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
         double A, B, C, MEDIA;
	 cin >> fixed >> setprecision(1) >> A >> B;
	 A *= 3.5;
	 B *= 7.5;
	 MEDIA = (A + B) / 11;
	 cout << fixed << setprecision(5) << "MEDIA = " << MEDIA << endl;
 
    return 0;
}
