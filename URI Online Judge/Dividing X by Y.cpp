#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    double result,X,Y;
    cin>>N;
    for(int i=1; i<=N; i++)
    {
        cin>>X>>Y;
        if(Y==0)
            cout<<"divisao impossivel"<<endl;
        else
        {
            result=X/Y;
            cout<<fixed<<setprecision(1)<<result<<endl;
        }

    }



    return 0;
}



