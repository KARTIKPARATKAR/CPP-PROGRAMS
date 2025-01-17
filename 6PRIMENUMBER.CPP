//The number which has only two factor (1 and itself) then it is a prime number.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Give the number: "<<endl;
    cin>>a;
    int b=2;
    while(a!=b)
    {
        if(a%b==0)
        {
            cout<<a<<" is not a prime number."<<endl;
            return 0;
        }
        b++;
    }
    cout<<a<<" is a prime number"<<endl;
    return 0;
}
