/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>

using namespace std;

int main()
{
    int n,a[200],mn=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    for(int i=0; i<n; i++)
    {
        int c=0;
        if(a[i]%2 != 0)
        {
            cout<<0<<endl;
            return 0;
        }
        else
        {
            while(a[i]%2 == 0)
            {
                a[i]/=2;
                c++;
            }
            if(i==0)
            {
                mn=c;
                continue;
            }
            if(c<mn)
            mn=c;
        }
    }
    cout<<mn;

    return 0;
}
