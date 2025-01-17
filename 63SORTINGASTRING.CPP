//Sort the string without using in built function
//This is a bubble sort algorithm
//Bubble Sort works by repeatedly stepping through the list of elements to be sorted, 
//comparing each pair of adjacent elements, and swapping them if they are in the wrong order. 
//This process is repeated until no swaps are needed, indicating that the list is sorted.
#include<iostream>
using namespace std;
int main()
{
  string str;
  cout<<"Give string:"<<endl;
  getline(cin,str);
  cout<<"The string is:"<<str<<endl;
  int k=str.length();
  for(int i=0;i<k;i++)
  {
    for(int j=0;j<k-i-1;j++)
    {
      if(str[j]>str[j+1])
      {
        char temp;
        temp=str[j];
        str[j]=str[j+1];
        str[j+1]=temp;
      }
    }
  }

  cout<<"String after sorting is :" <<str<<endl;
  return 0;
}
