#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double N1,N2,N3,N4,avg;
    double N5;
    cin>>fixed>>setprecision(1)>>N1>>N2>>N3>>N4;
    avg=((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;


    if(avg>=7.0)
        {
            cout<<fixed<<setprecision(1)<<"Media: "<<avg<<endl;
            cout<<"Aluno aprovado."<<endl;
        }

    else if(avg<5.0)
        {
            cout<<fixed<<setprecision(1)<<"Media: "<<avg<<endl;
            cout<<"Aluno reprovado."<<endl;
        }

    else if(avg>=5.0 && avg<=6.9)
        {
            cin>>N5;
            cout<<fixed<<setprecision(1)<<"Media: "<<avg<<endl;
            cout<<"Aluno em exame."<<endl;
            cout<<"Nota do exame: "<<N5<<endl;
            avg=(avg+N5)/2;
            if(avg>=5.0)
                cout<<"Aluno aprovado."<<endl;
            else if(avg<=4.9)
                cout<<"Aluno reprovado."<<endl;
            cout<<"Media final: "<<avg<<endl;
        }


    return 0;
}
