//While using vector,you must declare the vector header file
//Finding the last occurance of element x in a vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>V(6);   //Here notable thing is that, we didnt initialize the vector with size. If we initialize the vector with size,there would
                  //already elements be present of equal numbers as you have initialize the vector. And when you try to push back six elements
                  //in a vector,it will store on the consequent position and not on that initialized position.
  cout<<"Give elements in a vector: "<<endl;
  for(int i=0;i<6;i++)
  {
    cin>>V[i];
  }
  cout<<"Give x:"<<endl;
  int x;
  cin>>x;
  int count=-1;
  for(int i=0;i<V.size();i++)
  {
    if(V[i]==x)
    {
      count=i;
    }
  }
  cout<<"Last occurance of element "<<x<<" is at index "<<count<<" position"<<endl;


  //Another way of solving this question is to traverse the vector from last element and as soon as you find the element x ,
  //you print the index and break the loop. For this there would be minor changes in for loop as follows-
  // for(int i=v.size()-1;i>=0;i--);
  //     { 
  //        if(V[i]==x)
  //        {
  //           count=i;
  //            break;
  //         }
  //      } 
  return 0;
}
