#include <iostream>
using namespace std;

int main()
{

   int X,T,c=0;
   cin>>T;
   for(int i=0; i<T; i++)
   {
       cin>>X;
       for(int k=1; k<=X; k++)
       {
           if(X%k==0)
            c++;
       }
       if(c>2)
        cout<<"Not"<<endl;
       else if(c<=2)
       {
           cout<<"Prime"<<endl;
       }
       c=0;

    }


    return 0;
}
