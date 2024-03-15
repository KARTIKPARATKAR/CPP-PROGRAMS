//Print the maximum and minimum number from a given array
#include<iostream>
using namespace std;
int main()
{
  int array[]={3,5,2,7,5,88,33,556,24,390};
  int size=sizeof(array)/sizeof(array[0]);
  int max=array[0];
  int min=array[0];
  for(int i=1;i<size;i++)
  {
   if(max<array[i])
   {
    max=array[i];
   }
   if(min>array[i])
   {
    min=array[i];
   }
  }
  cout<<"Max is : "<<max<<endl;
  cout<<"Min is : "<<min<<endl;
  return 0;
}