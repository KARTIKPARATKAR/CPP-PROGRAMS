#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> vec;
  cout<<"Give 5 elements in vector vec:"<<endl;
  for(int i=0;i<5;i++)
  {
    int integer;
    cin>>integer;
    vec.push_back(integer);
  }
  cout<<"Vector vec is: "<<endl;
  for(int i=0;i<vec.size();i++)
  {
    cout<<vec[i]<<" ";
  }
  //Insert 33 at 3rd position relative to 1st element
  vec.insert(vec.begin()+3,33);
  cout<<endl<<"Vector vec after inserting 33 at 3rd position relative to first position"<<endl;
   for(int i=0;i<(vec.size());i++)
  {
      cout<<vec[i]<<" ";
  }
  //Deleting elements in vector
  vec.pop_back(); //This will delete the element present at the end.
  cout<<endl<<"Vector after popping an element:"<<endl;
   for(int i=0;i<(vec.size());i++)
  {
      cout<<vec[i]<<" ";
  }
  //Use erase for removing an element of vector if it is in between
  vec.erase(vec.begin()+2);  //This will erase the element at position 2 relative to begin.
  cout<<endl;
  cout<<"Vector after erasing 2nd element relative to the first element: "<<endl;
  for(int i=0;i<(vec.size());i++)
  {
    cout<<vec[i]<<" ";
  }
  return 0;
}