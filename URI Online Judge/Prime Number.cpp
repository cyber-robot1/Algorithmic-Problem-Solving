#include <iostream>
using namespace std;

int main()
{
   int N,X,c=0;
   cin>>N;
   if(N>=1&&N<=100)
   {
       for(int i=1; i<=N; i++)
       {
           cin>>X;
           for(int i=1; i<=X; i++)
           {
               if(X%i==0)
                c++;
           }
           if(c>2)
            cout<<X<<" nao eh primo"<<endl;
           else
            cout<<X<<" eh primo"<<endl;
           c=0;
       }
   }

   return 0;
}
