//Write a program to check whether duplicate value is present in an array or not.
//Duplicate means the value occuring for two or more times
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Give no of elements in an array: "<<endl;
cin>>n;
int arr[n];
cout<<"Give "<<n<<" elements in an array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Your array is:"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
int temp;
for(int i=0;i<n;i++)
{
    temp=arr[i];
    for(int k=i+1;k<n;k++)   //Reason behinf starting k=i+1 because i want to compare arr[i] with arr[i+1]
    {
       if(temp==arr[k]) 
       {
        cout<<"Duplicate is present of "<<arr[k]<<" in an array."<<endl;
        return 0;
       }
    }
}
cout<<"Duplicate is not present in an array."<<endl;
return 0;
}
