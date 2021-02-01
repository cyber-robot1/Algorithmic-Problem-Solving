#include<iostream>
#include<cctype>
using namespace std;
int main(){
    
    char letter;
    cin>>letter;
    if(isupper(letter))
    {
        letter=letter+32;
        cout<<letter<<endl;
    }
    else
    {
        letter=letter-32;
        cout<<letter<<endl;
    }
    
    return 0;
}
