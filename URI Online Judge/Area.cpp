#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
  double pi = 3.14159, A, B, C, Area1, Area2, Area3, Area4, Area5;
	cin >> fixed >> setprecision(1) >> A >> B >> C;
	Area1 = 0.5 * A * C;
	Area2 = pi * C * C;
	Area3 = 0.5 * (A + B) * C;
	Area4 = B * B;
	Area5 = A * B;
	cout << fixed << setprecision(3) << "TRIANGULO: " << Area1 << endl;
	cout << fixed << setprecision(3) << "CIRCULO: " << Area2 << endl;
	cout << fixed << setprecision(3) << "TRAPEZIO: " << Area3 << endl;
	cout << fixed << setprecision(3) << "QUADRADO: " << Area4 << endl;
	cout << fixed << setprecision(3) << "RETANGULO: " << Area5 << endl;
 
    return 0;
}
