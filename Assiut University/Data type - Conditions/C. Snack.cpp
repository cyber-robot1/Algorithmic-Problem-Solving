#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    int X;
    double Y,total;
    cin>>X>>Y;
    if (X==1)
    {
     total=4*Y;   
    }
    if (X==2)
    {
        total=4.5*Y;
    }
    if (X==3)
    {
        total=5*Y;
    }
    if (X==4)
    {
        total=2*Y;
    }
    if (X==5)
    {
        total=1.5*Y;
    }
    cout<<fixed<<setprecision(2)<<"Total: R "<<total<<endl;
    
    return 0;
}
