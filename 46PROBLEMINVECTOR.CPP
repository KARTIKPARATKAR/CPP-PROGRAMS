//Find the difference of sum of elements at even indices and sum of elements at odd indices.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>name;
  cout<<"Give elements in a vector:"<<endl;
  for(int i=0;i<7;i++)
  {
    int p;
    cin>>p;
    name.push_back(p);
  }
  cout<<"Your vector is:"<<endl;
  for(int i=0;i<name.size();i++)
  {
    cout<<name[i]<<" ";
  }
  int sumeven=0,sumodd=0;
  for(int i=0;i<name.size();i+=2)
  {
    sumodd+=name[i];
  }
  for(int i=1;i<name.size();i+=2)
  {
    sumeven+=name[i];
  }
  cout<<endl<<"Sum at odd "<<sumodd<<endl;
  cout<<"Sum at even "<<sumeven<<endl;
  int diff=sumodd-sumeven;
  cout<<"The difference is:"<<diff<<endl;
  return 0;
} 
