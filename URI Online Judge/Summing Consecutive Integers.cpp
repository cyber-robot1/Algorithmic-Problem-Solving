#include <iostream>
using namespace std;

int main()
{

    int A,N,sum=0;
    cin>>A>>N;
  
    while(N<=0)
    {
        cin>>N;
    }

    for(int i=A, j=1; j<=N; i++, j++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;


    return 0;
}
