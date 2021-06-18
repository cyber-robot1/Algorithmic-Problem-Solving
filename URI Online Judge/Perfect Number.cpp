#include <iostream>
using namespace std;
int main()
{

   int N,X,sum=0;
   cin>>N;
   if(N>=1&&N<=100)
   {
       for(int i=1; i<=N; i++)
       {
           cin>>X;
           for(int i=1; i<X; i++)
           {
               if(X%i==0)
               {
                   sum=sum+i;
               }
           }
           if(sum==X)
           {
               cout<<X<<" eh perfeito"<<endl;
               sum=0;
           }
           else
           {
               cout<<X<<" nao eh perfeito"<<endl;
               sum=0;
           }
       }
   }
   return 0;
}
