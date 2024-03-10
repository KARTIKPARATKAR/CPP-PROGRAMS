//Writing a code to count the number of elements greater than a perticular element x
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Give no of elements in array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Give "<<n<<" elements in an array."<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int p;
    cout<<"What is number above which you want to count the number: "<<endl;
    cin>>p;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>p)
        {
            count++;
        }
    }
    cout<<"There are "<<count<<" elements greater than "<<p<<endl;
    return 0;
}