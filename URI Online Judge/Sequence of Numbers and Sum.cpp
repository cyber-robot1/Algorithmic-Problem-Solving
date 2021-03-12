#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,M,sum=0;
    while(true)
    {
        cin>>M>>N;
        if (M<=0 | N<=0)
            break;
        else
        {
           if (M<N)
           {
               for (int i=M; i<=N; i++)
               {
                   cout<<i<<" ";
                   sum=sum+i;
               }
               cout<<"Sum="<<sum<<endl;
               sum=0;
           }
           else if (M>N)
           {
               swap(M,N);
               for (int i=M; i<=N; i++)
               {
                   cout<<i<<" ";
                   sum=sum+i;
               }
               cout<<"Sum="<<sum<<endl;
               sum=0;
           }
           else if (M==N)
           {
               cout<<M<<" Sum="<<M<<endl;
           }
        }
    }

    return 0;
}



