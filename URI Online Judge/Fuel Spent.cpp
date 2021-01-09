#include <iostream>
#include<iomanip> 
using namespace std;
 
int main() {
 
        int Speed, Time;
	float Litre, Distance;
	cin >> Time >> Speed;
	Distance = Speed * Time;
	Litre = Distance / 12;
	cout << fixed << setprecision(3) << (Litre)<< endl;
 
    return 0;
}