//Writing a program to find the largest element in an array
#include<iostream>
using namespace std;
int main()
{
int arr[50],n;
cout<<"Enter how many elements do you have t store?"<<endl;
cin>>n;
cout<<"Enter the array elements: "<<endl;
for(int i=0;i<n;i++)         
{
    cin>>arr[i];      //Taking input of elements in an array
}
cout<<"Array is:"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";  // Printing the array
}

int max=arr[0];   //Let max element is at index 0
for(int i=1;i<n;i++)
{
    if(max<arr[i])   //If array element is greater than max,then store it in max.
    {
        max=arr[i];
    }
}
cout<<"Largest element is : "<<max<<endl;
return 0;
}
