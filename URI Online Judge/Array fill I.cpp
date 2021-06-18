#include <iostream>
using namespace std;

int main()
{

    int V, N[10];
    cin>>V;
    if(V<50)
    {
        for(int i=0; i<10; i++)
        {
            if(i==0)
                N[0]=V;
            else
            {
                N[i]=N[i-1]*2;
            }
        }
        for(int i=0; i<10; i++)
        {
            cout<<"N["<<i<<"]"<<" = "<<N[i]<<endl;
        }
    }

   return 0;

}
