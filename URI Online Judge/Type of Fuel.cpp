#include <iostream>
using namespace std;

int main()
{

    int N, A=0, G=0, D=0;

    while(true)
    {
        cin>>N;
        if(N==4)
            break;
        else
        {
            if(N==1)
                A++;
            else if(N==2)
                G++;
            else if(N==3)
                D++;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<A<<endl;
    cout<<"Gasolina: "<<G<<endl;
    cout<<"Diesel: "<<D<<endl;




    return 0;
}
