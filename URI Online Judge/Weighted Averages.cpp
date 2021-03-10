#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    double x,y,z,avg=0;
    cin>>N;
    for(int i=1; i<=N; i++)
    {
        cin>>fixed>>setprecision(1)>>x>>y>>z;
        avg=((x*2)+(y*3)+(z*5))/10;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }



    return 0;
}
