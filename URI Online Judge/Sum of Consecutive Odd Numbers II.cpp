#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,X,Y,sum=0;
    cin>>N;
    for(int i=1; i<=N; i++)
    {
        cin>>X>>Y;
        if(X<Y)
        {
            for(int i=(X+1); i<=(Y-1); i++)
            {
                if(i%2!=0)
                {
                    sum=sum+i;
                }
            }
            cout<<sum<<endl;
            sum=0;
        }
        else if(X>Y)
        {
            swap(X,Y);
            for(int i=(X+1); i<=(Y-1); i++)
            {
                if(i%2!=0)
                {
                    sum=sum+i;
                }
            }
            cout<<sum<<endl;
            sum=0;
        }
        else if(X==Y)
        {
            cout<<0<<endl;
        }
    }

    return 0;
}



