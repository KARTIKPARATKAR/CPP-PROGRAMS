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
___

//Reverse array of integers
#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9};
    int p;
    p=sizeof(array)/sizeof(array[0]);
    cout<<"The reverse is:"<<endl;
    for(int i=p-1;i>=0;i--)            //Here we have started for loop from (p-1) because we dont want that "\0" which is stored at the end of an array
    {                                  //i>=0 because we want to print element present at index 0          
        cout<<array[i]<<" ";
    }
    return 0;
}
