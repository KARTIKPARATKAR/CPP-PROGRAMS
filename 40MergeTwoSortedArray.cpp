//We are given two sorted array.
//We have to merge these two arrays and store it in 3rd array.
#include<iostream>
using namespace std;
int main()
{
   int arr1[]={1,3,4};
   int arr2[]={2,5,6,7,9};
   int a,b;
   a=sizeof(arr1)/sizeof(arr1[0]);
   b=sizeof(arr2)/sizeof(arr2[0]);
   int res[a+b];
   int i=0;  //i is for traversing in array arr1
   int j=0;  //j is for traversing in array arr2  
   int k=0;  //k is for traversing in array res
   while(i<a && j<b)  //This while loop might get exit after one of the condition is failed. So we need to write
   {                                 //Two more while loop so as to store the other left values in arr1 and arr2
      if(arr1[i]<arr2[j])
      {
         res[k]=arr1[i];
         i++;
         k++;
      }
      else
      {
         res[k]=arr2[j];
         j++;
         k++;
      }
   }
    while (i < a)   //This while loop will make ensure that there is no element left in arr1
     {
        res[k] = arr1[i];
        i++;
        k++;
     }
    while (j < b)  ////This while loop will make ensure that there is no element left in arr2
     {
     {
        res[k] = arr2[j];
        j++;
        k++;
     }
     }
   for(int p=0;p<(a+b);p++)
   {
      cout<<res[p]<<" ";
   }
   return 0;
}