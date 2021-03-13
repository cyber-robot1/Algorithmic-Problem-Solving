#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X,Y;
    while(true)
    {
        cin>>X>>Y;
        if(X==Y)
            break;
        else
        {
            if(X<Y)
                cout<<"Crescente"<<endl;
            else
                cout<<"Decrescente"<<endl;
        }
    }

    return 0;
}



