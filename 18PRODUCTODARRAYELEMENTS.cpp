//Writing a program to print the product of the array elements
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many elements in array?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Give "<<n<<" elements in an array."<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your array is: "<<arr[n]<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int product=1;
    for(int i=0;i<n;i++)
    {
        product*=arr[i];
    }
    cout<<"The product of array elements is "<<product<<endl;
    return 0;
}
