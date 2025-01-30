//Writing a program to print all zeroes at the start and all ones at the end of a binary number.
#include<iostream>
using namespace std;

void print(int arr[],int n)                       //Function for printing an array
{
    cout<<"Your binary number is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Give no of elements in an binary array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Give "<<n<<" binary inputs in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print(arr,n);                                 //Calling the function to print an array;
    int zero=0;                                   //Here we dont have to count no of ones as we will print ones from no of zeroes to length of an array
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0 )
        {
            zero++;
        }
    }
    
    for(int i=0;i<zero;i++)
    {
        arr[i] = 0;
    }
    for(int i=zero;i<n;i++)
    {
        arr[i] = 1;
    }
    
    print(arr,n);    // Calling the function to print an array after zeroes at start and ones at end
}
