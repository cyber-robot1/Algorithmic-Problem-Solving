#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N,T;
    double rabbit=0, rat=0, frog=0, total=0;
    double p_rabbit, p_rat, p_frog;
    char S;
    cin>>N;
    for(int i=1; i<=N; i++)
    {
        cin>>T>>S;
        total=total+T;
        if(S=='C')
        {
            rabbit+=T;
        }
        else if(S=='R')
        {
            rat+=T;
        }
        else if(S=='S')
        {
            frog+=T;
        }

    }
    p_rabbit=((rabbit/total)*100);
    p_rat=((rat/total)*100);
    p_frog=((frog/total)*100);
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<rabbit<<endl;
    cout<<"Total de ratos: "<<rat<<endl;
    cout<<"Total de sapos: "<<frog<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<p_rabbit<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<p_rat<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<p_frog<<" %"<<endl;


    return 0;
}
