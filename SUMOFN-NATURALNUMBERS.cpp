//The formula for sum of n-natural number is n(n+1)/2
#include<iostream>
using namespace std;
int main()
{
    cout<<"Give the no till when u want the sum:"<<endl;
    int n,sum;
    cin>>n;
    sum=n*(n+1)/2;
    cout<<"The sum is "<<sum<<endl;
    return 0;
}