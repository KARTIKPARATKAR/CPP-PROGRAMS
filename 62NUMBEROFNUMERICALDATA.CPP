//How do you calculate the number of numerical digits in a string?
#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str;
  cout<<"Give string:"<<endl;
  getline(cin,str);
  cout<<"String is:"<<str<<endl;
  int count =0;
  for(int i=0;i<str.length();i++)
  {
     if(str[i]>='0' && str[i]<='9')  //This will check whether the value is between 0 to 9 or not.
     {
      count++;
     }
  }
  cout<<"No of numerical attribute is:"<<count<<endl;
  return 0;
}
