#include <iostream>
using namespace std;

int main()
{

   long long N,T,fact=1;
   cin>>T;
   for(int i=0; i<T; i++)
   {
       cin>>N;
       for(int k=1; k<=N; k++)
       {
           fact=fact*k;
       }
       cout<<fact<<endl;
       fact=1;
   }


    return 0;
}
