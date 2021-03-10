#include <iostream>
using namespace std;

int main()
{
    int n, mx=0, p=0;
    for(int i=1; i<=100; i++)
    {
        cin>>n;
        if(n>mx)
        {
            mx=n;
            p=i;
        }
    }
    cout<<mx<<endl;
    cout<<p<<endl;


    return 0;
}
