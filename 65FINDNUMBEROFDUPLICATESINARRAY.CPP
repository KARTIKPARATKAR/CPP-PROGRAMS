//How do you total all of the matching integer elements in an array
#include<iostream>
using namespace std;
int main()
{
  cout<<"How many elements in an array?"<<endl;
  int a;
  cin>>a;
  int array[a];
  cout<<"Give elements in an array:"<<endl;
  for(int i=0;i<a;i++)
  {
    cin>>array[i];
  }
  int count=0;
  for(int i=0;i<a;i++)
  {
    for(int j=i+1;j<a;j++)
    {
      if(array[i]==array[j])
      {
        count++;
        cout<<"Matching integer is "<<array[i]<<endl;
      }
    }
  }
  cout<<"No of duplicates are "<<count<<endl;
  return 0;
}
