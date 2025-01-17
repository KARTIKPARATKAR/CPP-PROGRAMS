//Print the first repeating element in an array of integers.
#include<iostream>
using namespace std;
int main()
{
   int array[]={1,4,7,8,1,9,2,33,5,6,4,9};
   int size=sizeof(array)/sizeof(array[0]);
   int temp;
   for(int i=0;i<size;i++)
   {
      temp=array[i];
      for(int j=i+1;j<size;j++)
      {
         if(temp==array[j])
         {
           cout<<"1st repeating element in an integer array is :" <<temp;
           return 0;
         }
      }
   }
    return 0;
}
