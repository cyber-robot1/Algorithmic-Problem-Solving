#include <iostream>
using namespace std;

int main()
{
    double start=0, endd=0;

    for(double i=0; i<=2; i+=0.2)
    {
        for(double j=(1+start); j<=(3+endd); j++)
        {
            cout<<"I="<<i<<" "<<"J="<<j<<endl;
        }
        start+=0.2;
        endd+=0.2;
    }
    return 0;
}



