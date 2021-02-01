#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
    long double N,intPart,fractPart;
    cin>>N;
    fractPart=modf(N, &intPart);
    if(fractPart == 0)
    {
        cout<<"int "<<intPart<<endl;
    }
    else
    {
        cout<<"float "<<intPart<<" "<<fractPart<<endl;
    }
    
    
    return 0;
}
