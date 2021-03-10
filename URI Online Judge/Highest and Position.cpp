#include <iostream>
using namespace std;

int main()
{
    int arr[1000], mx_element=0, mx_index=0;

    for(int i=0; i<100; i++)
    {
        cin>>arr[i+1];
    }

    mx_element=arr[1];
    mx_index=1;

    for(int i=2; i<=100; i++)
    {
        if(mx<arr[i])
        {
            mx_element=arr[i];
            mx_index=i;
        }
    }
    cout<<mx_element<<endl;
    cout<<mx_index<<endl;


    return 0;
}
