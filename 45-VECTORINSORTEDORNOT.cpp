//Check whether the gien vector is in sorted manner or not.
//We are checking the sorted in ascending order
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>name;
  cout<<"Give elements in an vector:"<<endl;
  for(int i=0;i<5;i++)
  {
    int in;
    cin>>in;
    name.push_back(in);
  }
  cout<<"Your vector is : "<<endl;
  for(int i=0;i<name.size();i++)
  {
    cout<<name[i]<<" ";
  }
  for(int i=1;i<=name.size();i++)
  {
    if(name[i]<name[i-1])  //Here we are checking the condition of whether next element is smaller than previous element or not.
    {
      cout<<endl<<"Vector is not sorted"<<endl;
      return 0;
    }
  }
  cout<<endl<<"Vector is sorted"<<endl;
  return 0;
}