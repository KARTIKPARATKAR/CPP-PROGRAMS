//Finding unique element in a given array
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,4,6,8,9,5,3,1,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        bool unique=true;    //Initialized boolean unique as true
        for(int j=0;j<n;j++)
        {
            if((i != j) && arr[i] == arr[j])  //Here checking whether unique or not
            {
                unique=false;
                break;
            }
        }
        if(unique){
            cout<<arr[i]<<" ";
        }
        
    }
    
    
    return 0;
}
