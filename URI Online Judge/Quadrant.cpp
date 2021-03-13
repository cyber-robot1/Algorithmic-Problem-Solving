#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X,Y;
    while(true)
    {
        cin>>X>>Y;
        if(X==0 | Y==0 | (X==0 && Y==0))
        break;
        else
        {
        if(X>0 && Y>0)
            cout<<"primeiro"<<endl;
        else if(X<0 && Y>0)
            cout<<"segundo"<<endl;
        else if(X>0 && Y<0)
            cout<<"quarto"<<endl;
        else if(X<0 && Y<0)
            cout<<"terceiro"<<endl;
        }
    }



    return 0;
}



