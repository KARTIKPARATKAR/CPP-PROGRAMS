//Selection sort in an array 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Give no of elements in an array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Give "<<n<<" inputs in an array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    for(int i=0;i<n;i++)               //Traversing through the array
    {
        int minindex=i;                //Defining minimum index
        for(int j=i+1;j<n;j++)         //Traversing through the array starting from 2nd element i.e. index 1 so as to compare it with 1st element.
        {
          if(arr[j]<=arr[minindex])    // If element is less than current element then storing this index value in minindex
        {
           minindex=j;
        }
        
        }
        
        swap(arr[i],arr[minindex]);    //Swapping the current element with smallest element
    }
    
    cout<<"Sorted array is:"<<endl;   //Printing the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
