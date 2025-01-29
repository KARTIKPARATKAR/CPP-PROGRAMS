//Write function to print all prime numbers between two given numbers i.e.range
#include<iostream>
using namespace std;

int prime(int a)
{
    
    for(int i=2;i<a;i++)
    {
        if(a % i == 0)
        {
            return -1;  // As soon as return -1; executes inside the for loop, the function terminates immediately and does not continue further iterations.
        }
    }
    
    cout<<a<<" is a prime number"<<endl;
    return 1;        // Return 1 indicates success
}
int main()
{
    int p,q;
    cout<<"Give the lower level:"<<endl;
    cin>>p;
    cout<<"Give the upper level:"<<endl;
    cin>>q;
    for(int i=p;i<=q;i++)
    {
        prime(i);
    }
    
    return 0;
}
