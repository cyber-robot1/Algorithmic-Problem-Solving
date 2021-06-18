#include <iostream>
using namespace std;

int main()
{

   int X,sum=0;
   while(true)
   {
       cin>>X;
       if(X!=0)
       {
           for(int i=0; i<=8; i+=2)
           {
               if(X%2==0)
               {
                   sum=sum+(X+i);
               }
               else
               {
                   X++;
                   sum=sum+(X+i);
               }
           }
           cout<<sum<<endl;
           sum=0;
       }
       else
           break;
   }
    return 0;

}
