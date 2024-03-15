//Writing a code to print the integer string in reverse order.
#include<iostream>
using namespace std;
int main()
{
  int array[]={1,2,5,3,8,6};
  int size=sizeof(array)/sizeof(array[0]);
  int p=size;       //Here we have intialized the integer p so as to store the no of elements in array.
  for(int i=0;i<p;i++)   //We will be decrementing the value of size and thats why we cant use the size in this for loop
  {
    array[i]=array[size-1];
    size--;
  }
  cout<<"Reverse string is:"<<endl;
  for(int i=0;i<p;i++)
  {
    cout<<array[i]<<" ";
  }
  return 0;
}
