//WRITE A CODE TO PRINT THE SUM OF ARRAY ELEMENTS
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"HOw many elements are there in an array?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Give the "<<n<<" elements in an array."<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"The sum of array elemets is "<<sum<<endl;
    return 0;
}
