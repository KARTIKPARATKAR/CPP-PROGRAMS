//Write a code for second maximum element in an array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Give no of elements in an array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Give "<<n<<" elements in an array."<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int max1=arr[0],max2=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max1<arr[i])
        {
            max1=arr[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(max2<arr[i] && arr[i] != max1)
        {
            max2=arr[i];
        }
    }
    cout<<endl;
    cout<<"1st max is: "<<max1<<endl;
    cout<<"2nd max is: "<<max2<<endl;
    return 0;
}