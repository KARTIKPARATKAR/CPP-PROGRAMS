//Writing a program to print all zeroes at the start and all ones at the end of a binary number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"What is size of binary number?"<<endl;
    cin>>n;
    char arr[n];
    cout<<"Give the binary number:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<"Your binary number is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    int zeroes=0,ones=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='0')
        {
            zeroes++;
        }
        if(arr[i]=='1')
        {
            ones++;
        }
    }
    cout<<"Binary number with zeroes at start and ones at end is:"<<endl;
    for(int i=0;i<zeroes;i++)
    {
        cout<<"0 ";
    }
    for(int i=0;i<ones;i++)
    {
        cout<<"1 ";
    }
    return 0;
}
