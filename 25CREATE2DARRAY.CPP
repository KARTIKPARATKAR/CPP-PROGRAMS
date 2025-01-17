//Writing a program to construct a 2D array.
//2d array is nothing but the matrix.
#include<iostream>
using namespace std;
int main()
{     
    int i;
    cout<<"Tell how many rows?"<<endl;
    cin>>i;

    int j;
    cout<<"Tell how many column?"<<endl;
    cin>>j;

    int arr[i][j];
    cout<<"Give "<<i*j<<" elements into the first array"<<endl;
    for(int k=0;k<i;k++)
    {
        for(int p=0;p<j;p++)
        {
            cin>>arr[k][p];
        }
    }

    cout<<"Your 2d array is "<<endl;
    for(int k=0;k<i;k++)
    {
        for(int p=0;p<j;p++)
        {
            cout<<arr[k][p]<<" ";
        }
        cout<<endl;
    }
    //Above code is to create a 2d array of size i*j
    //Now below we will copy paste the same above code to create some another array with different array name.
    int r;
    cout<<"Tell how many rows?"<<endl;
    cin>>r;

    int a;
    cout<<"Tell how many column?"<<endl;
    cin>>a;
      

    int arr1[r][a];
    cout<<"Give "<<r*a<<" elements into the second array"<<endl;
    for(int k=0;k<r;k++)
    {
        for(int p=0;p<a;p++)
        {
            cin>>arr1[k][p];
        }
    }

    cout<<"Your 2d array is "<<endl;
    for(int k=0;k<r;k++)
    {
        for(int p=0;p<a;p++)
        {
            cout<<arr[k][p]<<" ";
        }
        cout<<endl;
    }


    if(i!=r || j!=a)  // Here we are checking whether the addition is possible of not.
      {
        cout<<"Addition of two matrixes are not possible as the two 2d arrays are of different dimensions"<<endl;
        return 0;
      }
      
    //Above code will create the 2d array having name arr1
    //Below is the code for addition of  two 2d arrays.
    int arradd[r][a];  //This is the array where we will be atoring the sum of two 2d arrays (arr and arr1)
    for(int k=0;k<r;k++)
    {
        for(int p=0;p<a;p++)
        {
         arradd[k][p]=arr[k][p]+arr1[k][p];
        }
    }
    //Now printing the 2d array having sum of arr and arr1
    cout<<endl<<"Your sum of two arrays are:"<<endl;
    for(int k=0;k<r;k++)
    {
       for(int p=0;p<a;p++) 
       {
        cout<<arradd[k][p]<<" ";
       }
       cout<<endl;
    }
    return 0;
} 
