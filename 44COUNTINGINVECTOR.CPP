//Count the no of occurance of a perticular element in an vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>k;
  cout<<"Give 6 elements in a vector: "<<endl;
  for(int i=0;i<6;i++)
  {
    int ele;
    cin>>ele;
    k.push_back(ele);
  }
  int x;
  cout<<"Give element:"<<endl;
  cin>>x;
  int count=0;
  for(int i=0;i<k.size();i++)
  {
    if(k[i]==x)
    {
      count++;
    }
  }
  cout<<"The occurance of "<<x<<" in vector k is "<<count<<" times"<<endl;
  return 0;
}
