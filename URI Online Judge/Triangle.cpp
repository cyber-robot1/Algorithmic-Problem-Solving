#include <iostream>
#include<iomanip> 
using namespace std;
 
int main() {
 
        float A, B, C;
	float Perimetro, Area;
	cin >> A >> B >> C;
	if ((A)+(B)>(C) && (B)+(C)>(A) && (A)+(C)>(B)) {
		Perimetro = A + B + C;
		cout << fixed << setprecision(1) << "Perimetro = " << Perimetro << endl;
	}
	else
	{
		Area = (0.5*(A+B))*C;
		cout << fixed << setprecision(1) << "Area = " << Area << endl;
	}
    
      return 0;
}