//Write a program for patterns as specified below.
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"Give size of array: "<<endl;
    cin>>i;
    cin>>j;
    cout<<"Give "<<i*j<<" values into the array: "<<endl;
    int arr[i][j];
    for(int k=0;k<i;k++)
    {
        for(int m=0;m<j;m++)
        {
            cin>>arr[k][m];
        }
    }
    cout<<"Your array is: "<<endl;
    for(int k=0;k<i;k++)
    {
        for(int m=0;m<j;m++)
        {
            cout<<arr[k][m]<<" ";
        }
        cout<<endl;
    }

    cout<<"Printing the left bottom right angle shape of the given 2d array: "<<endl;
    for(int k=0;k<i;k++)
    {
        for(int m=0;m<j;m++)
        {    
            if(k>=m)
            {
              cout<<arr[k][m]<<" ";
            }
            
        }
        cout<<endl;
    }

    cout << "Printing the right-top-right angle shape of the given 2D array: " << endl;
    for (int k = 0; k < i; k++) {
    for (int m = 0; m < j; m++) {
        if (m >= k) {
            cout << arr[k][m] << " ";
        } else {
            cout << "  "; // Print spaces for the empty spaces in the triangle
        }
    }
    cout << endl;
}

    return 0;
}