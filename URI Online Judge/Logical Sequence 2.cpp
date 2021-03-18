#include <bits/stdc++.h>
using namespace std;

int main()
{

    int X,Y;
    cin>>X>>Y;
    if(X<Y)
    {
        if((X>1&&X<20) && (Y>X&&Y<100000))
        {
            for(int i=1; i<=Y; i++)
            {
                if(i%X==0)
                    cout<<i<<endl;
                else
                    cout<<i<<" ";
            }
        }
    }
    else
    {
        swap(X,Y);
        if((X>1&&X<20) && (Y>X&&Y<100000))
        {
            for(int i=1; i<=Y; i++)
            {
                if(i%X==0)
                    cout<<i<<endl;
                else
                    cout<<i<<" ";
            }
        }
    }



    return 0;
}
