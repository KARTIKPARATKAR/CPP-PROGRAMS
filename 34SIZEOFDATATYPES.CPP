//Writing a program to print the sizes of the different datatypes in c++
#include<iostream>
using namespace std;
int main()
{
  string str;
  cin>>str;
  if(str=="Integer")
  {
    cout<<sizeof(int);
  }
   else if(str=="Long")
  {
    cout<<sizeof(long);
  }
  else if(str=="Float")
  {
    cout<<sizeof(float);
  }
  else if(str=="Double")
  {
    cout<<sizeof(double);
  }
  else if(str=="Character")
  {
    cout<<sizeof(char);
  }
  return 0;
 
}
