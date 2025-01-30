//Vectores are dynamic arrays.
//In arrays,we need to specify the size of arrays at the start. But in vectores,we can store any no of elements.
//Include header file vectore
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> hello;
  vector<int> hell;
  cout<<sizeof(hello)<<endl;   //This returns the size of vector object
  cout<<hello.size()<<endl;    //This prints number of elements currently stored in the vector
  hello.resize(50);
  cout<<hello.size()<<endl;
  cout<<hello.capacity()<<endl;
  //Declaring another vectore
  vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(8);
  cout<<"Printing the vectore v:"<<endl;
  for(int i=0;i<(v.size());i++)
  {
      cout<<v[i]<<" ";           // This will print like 1 3 6 8
  }
  cout<<endl<<"Size of v is "<<v.size()<<endl;
  v.insert(v.begin()+3,10);  //Inserting element 10 at 3rd position relative to the starting element
  cout<<"Again printing the vectore v:"<<endl;
  for(int i=0;i<(v.size());i++)
  {
      cout<<v[i]<<" ";
  }
  return 0;
}
