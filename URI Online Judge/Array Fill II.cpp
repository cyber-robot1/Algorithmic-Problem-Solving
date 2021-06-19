#include <iostream>
using namespace std;
int main()
{

    int T, N[1000],k=0;
    cin>>T;
    if(T>=2&&T<=50)
    {
        for(int i=0; i<1000; i++)
        {
            if(k!=T)
            {
                N[i]=k;
                k++;
            }
            else
            {
                k=0;
                N[i]=0;
                k++;
            }
        }
        for(int i=0; i<1000; i++)
        {
            cout<<"N["<<i<<"]"<<" = "<<N[i]<<endl;
        }

    }
   return 0;

}
