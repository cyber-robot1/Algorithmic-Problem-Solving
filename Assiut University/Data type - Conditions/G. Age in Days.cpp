#include<iostream>
using namespace std;
int main(){
    
    int y,m,d;
    long long N;
    cin>>N;
    y=N/365;
    N=N-((N/365)*365);
    m=N/30;
    N=N-((N/30)*30);
    d=N;
    cout<<y<<" years"<<endl;
    cout<<m<<" months"<<endl;
    cout<<d<<" days"<<endl;
    

    return 0;
}
