//Writing a code to reverse the array elements
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
    cout<<"Your array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0,j=n-1;  //We have initialized i with 0 and j with n-1 so as to start the traversing from beginning to end.
    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<"Reversed array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}