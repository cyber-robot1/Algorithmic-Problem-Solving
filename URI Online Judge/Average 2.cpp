#include <iostream>
#include<iomanip>
using namespace std;
int main() {
         
         double A, B, C, MEDIA;
	 cin >> fixed >> setprecision(1) >> A >> B >> C;
	 A *= 2;
	 B *= 3;
	 C *= 5;
	 MEDIA = (A + B + C) / 10;
	 cout << fixed << setprecision(1) << "MEDIA = " << MEDIA << endl;
    
    return 0;
}
