#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X,Y;
    cin>>X>>Y;
    if(X<Y)
    {
        for(int i=(X+1); i<=(Y-1); i++)
        {
            if(i%5==2 | i%5==3)
                cout<<i<<endl;
        }
    }
    else if(X>Y)
    {
        swap(X,Y);
        for(int i=(X+1); i<=(Y-1); i++)
        {
            if(i%5==2 | i%5==3)
                cout<<i<<endl;
        }
    }
    else if(X==Y)
    {
        cout<<0<<endl;
    }

    return 0;
}



