#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X,Y,sum=0;
    cin>>X>>Y;
    if(X<Y)
    {
        for(int i=X; i<=Y; i++)
        {
            if(i%13!=0)
                sum=sum+i;
        }
        cout<<sum<<endl;
    }
    else if(X>Y)
    {
        swap(X,Y);
        for(int i=X; i<=Y; i++)
        {
            if(i%13!=0)
                sum=sum+i;
        }
        cout<<sum<<endl;
    }
    else if(X==Y)
    {
        cout<<X<<endl;
    }


    return 0;
}



