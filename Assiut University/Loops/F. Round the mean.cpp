#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double A,B,c=0,sum=0,avg=0;
   cin>>A>>B;
   if(A<B)
   {
       for(int i=A; i<=B; i++)
       {
           sum=sum+i;
           c++;
       }
       avg=sum/c;
       cout<<ceil(avg)<<endl;
   }
   else if (A>B)
   {
   swap(A,B);
   for(int i=A; i<=B; i++)
     {
       sum=sum+i;
       c++;
     }
      avg=sum/c;
      cout<<ceil(avg)<<endl;
   }
   else if (A==B)
   {
       cout<<1<<endl;
   }
    
    return 0;
}
