// How do you sort an array of integers in ascending order?
#include<iostream>
using namespace std;
int main()
{
  cout<<"How many elements?"<<endl;
  int a;
  cin>>a;
  int array[a];
  cout<<"Give "<<a<<" elements in an array."<<endl;
  for(int i=0;i<a;i++)
  {
    cin>>array[i];
  }
  for(int i=0;i<a-1;i++)
  {
    for(int j=0;j<a-i-1;j++)
    {
      if(array[j]>array[j+1])
      {
        int temp;
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }
  cout<<"Array in ascending order is:"<<endl;
  for(int i=0;i<a;i++)
  {
    cout<<array[i]<<" ";
  }
  return 0;
}