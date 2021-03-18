#include <iostream>
using namespace std;

int main()
{

    int X;

    while(true)
    {
        cin>>X;
        if(X==0)
            break;
        for(int i=1; i<=X; i++)
        {
            if(i!=X)
                cout<<i<<" ";
            else
                cout<<i;
        }
        cout<<endl;
    }



    return 0;
}
