//Find the missing element in an array.
//Input is array and output is number which is not present in an array
//Approach:We will add all the indices in sum and at the same time we will subtract the values present at that 
//perticular index. If any perticular value is not present in that array, that value will be printed. 
#include<iostream>
using namespace std;
int main()
{
   int array[10]={1,2,3,5,6,7,8,9}; //Here we can easily tell the missing element just after seeing the array
   int sum=0;
   for(int i=0;i<10;i++)
   {
    sum=sum+i;           //We are adding all the indices in an array in sum
    sum=sum-array[i];    //We are adding all the values present at the perticular index
   }
   cout<<"Missing element is:"<<sum<<endl;
   return 0;
}
