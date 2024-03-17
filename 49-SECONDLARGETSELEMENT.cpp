//Find out the 2nd largest element in a given array
#include<iostream>
using namespace std;
int main()
{
   int arr[]={1,2,3,4,5,6,7,8,9,222,34};
   int s=sizeof(arr)/sizeof(arr[0]);
   int max=arr[0];
   int max2=arr[0];
   for(int i=0;i<s;i++)  //This for loop is finding the largest element in an array
   {
     if(arr[i]>max)
     {
        max=arr[i];
     }
   }
   for(int i=0;i<s;i++)
   {
    if(arr[i]>max2 && arr[i]!=max)  //This is finding the largest element in an array except the largest one. Which means that we will get the 2nd largest element in an array.
    {
      max2=arr[i];
    }
   }
   cout<<"2nd largest is:"<<max2<<endl;
   return 0;
}