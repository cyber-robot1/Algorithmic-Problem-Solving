#include <iostream>
using namespace std;

int main()
{
    long long X,N,mx=0;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>X;
        if(X>mx)
            mx=X;
    }
    cout<<mx<<endl;


    return 0;
}
