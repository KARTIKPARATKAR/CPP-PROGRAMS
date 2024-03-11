//Writing a c++ code to print whether a given number is prime number or not
#include<iostream>
using namespace std;

bool prime(int num)
{
   
    int b=2;  //We are initiating b=2 because every number is divisible by 1, so we will check divisibility from 2 and onwards
    while(b<num)
    {
        if(num%b==0)
        {
           return false;
        }
        b++;
    }
    return true;
}
int main()
{
     int a;
    cout<<"Give the number you want to check: "<<endl;
    cin>>a;
    if(prime(a))
    {
        cout<<"The number "<<a<<" is a prime number."<<endl;
    }
    else
    {
     cout<<"The number "<<a<<" is not a prime number."<<endl;
    }
    return 0;
}