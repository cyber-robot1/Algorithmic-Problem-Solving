#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

    double S=0;
    for(int i=1; i<=100; i++)
    {
        S=S+double(1)/i;
    }
    cout<<fixed<<setprecision(2)<<S<<endl;


    return 0;
}
