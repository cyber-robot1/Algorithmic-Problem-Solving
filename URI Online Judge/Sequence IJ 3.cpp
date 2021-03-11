#include <iostream>
using namespace std;

int main()
{

      for(int i=1, j=7; j<=15; i+=2, j+=2)
      {
          int start=j;
          for(int j=start; j>=(start-2); j--)
          {
              cout<<"I="<<i<<" "<<"J="<<j<<endl;
          }
      }


    return 0;
}
