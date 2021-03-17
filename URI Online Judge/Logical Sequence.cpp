#include <iostream>
using namespace std;

int main()
{

    int N,s,c;
    cin>>N;
    for(int i=1, j=1; i<=N, j<=N; i++, j++)
    {
        s=j*j;
        c=j*j*j;
        cout<<j<<" "<<s<<" "<<c<<endl;
        cout<<j<<" "<<++s<<" "<<++c<<endl;
    }



    return 0;
}
