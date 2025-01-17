//Finding unique element in a given array
#include<iostream>
using namespace std;
int main()
{
  int arr[]={1,1,3,4,5,2,3,5,6};
  int s=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<s;i++)
  {
    for(int j=i+1;j<s;j++)
    {
      if(arr[i]==arr[j])
      {
        arr[i]=arr[j]=-1;
      }
    }
  }
  for(int i=0;i<s;i++)
  {
    if(arr[i]>-1)
    {
      cout<<"Unique element is:"<<arr[i]<<endl;
    }
  }
  return 0;
}
