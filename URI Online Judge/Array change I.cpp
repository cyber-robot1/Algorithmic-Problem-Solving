#include <iostream>
using namespace std;


int main()
{

    int T,N;
    long long fib[61];
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>N;
        if(N>=0&&N<=60)
        {

          fib[0]=0;
          fib[1]=1;

          for(int i=2; i<=N; i++)
          {
                fib[i]=fib[i-1]+fib[i-2];
          }
         cout<<"Fib("<<N<<")"<<" = "<<fib[N]<<endl;
        }
    }

   return 0;

}
