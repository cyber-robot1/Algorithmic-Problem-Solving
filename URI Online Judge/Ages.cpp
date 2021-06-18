#include <iostream>
#include<iomanip>
using namespace std;

int main()
{

    int n,c=0;
    double sum=0,avg;
    while(true)
    {
        cin>>n;
        if(n>=0)
        {
            sum=sum+n;
        }
        else
            break;
        c++;
    }

     avg=sum/c;
     cout<<fixed<<setprecision(2)<<avg<<endl;


    return 0;
}
