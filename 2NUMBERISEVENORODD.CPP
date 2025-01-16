//The number is even when we divide the number by 2 and get remainder as 0.
//The number is odd when we divide the number by 2 and get remainder other than 0.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Give the integer number: "<<endl;
    cin>>a;
    if(a%2==0)
    {
        cout<<"The number "<<a<<" is even number"<<endl;
        return 0;
    }
    else
    {
        cout<<"The number "<<a<<" is an odd number"<<endl;
        return 0;
    }
}
