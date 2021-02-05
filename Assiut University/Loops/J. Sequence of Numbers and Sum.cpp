#include <iostream>
using namespace std;

int main()
{
    int M,N,c=0;
    while(true)
    {
     cin>>M>>N;
        if((M<=0) || (N<=0) || (M<=0&&N<=0))
            break;
        else
        {
            if(M<N)
            {
                for(int k=M; k<=N; k++)
                {
                    c=c+k;
                    cout<<k<<" ";
                }
                cout<<" sum ="<<c<<endl;
                c=0;
            }
            else if(M>N)
            {
                swap(M,N);
                for(int k=M; k<=N; k++)
                {
                    c=c+k;
                    cout<<k<<" ";
                }
                cout<<" sum ="<<c<<endl;
                c=0;
            }
            else if(M==N)
            {
                cout<<M<<" sum ="<<M<<endl;
                c=0;
            }
        }
    }

    return 0;
}
