#include <iostream>
using namespace std;

int main()
{

    int N,fact=1;
    cin>>N;
    if(N>0&&N<13)
    {
        for(int i=1; i<=N; i++)
        {
            fact=fact*i;
        }
        cout<<fact<<endl;
    }


    return 0;
}
