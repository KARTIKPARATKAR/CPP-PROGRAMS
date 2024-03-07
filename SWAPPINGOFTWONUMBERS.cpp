//Swaping of two numbers means mutually exchanging the values of two variables
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Give values to the two variables a and b"<<endl;
    cin>>a>>b;
    cout<<"Value of a before swapping is "<<a<<" and value of b before swapping is "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Value of a after swapping is "<<a<<" and value of b after swapping is "<<b<<endl;
    return 0;
}