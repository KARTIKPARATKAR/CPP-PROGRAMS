//Writing a program to find the perticular element.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Give the no of elements in an array: "<<endl;
    cin>>n;
    cout<<"Give "<<n<<" elements in an array."<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int find;
    cout<<"What do u want to find in an array: "<<endl;
    cin>>find;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==find)
        {
            cout<<"The number "<<find<<"is found at index "<<i<<" in an array."<<endl;
            return 0;
        }
    }
    cout<<"The element "<<find<<" is not found in an array"<<endl;
    return 0;
}
