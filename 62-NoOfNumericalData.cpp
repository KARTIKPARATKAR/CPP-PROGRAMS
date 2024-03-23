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
     if(str[i]=='0'|| str[i]=='1'|| str[i]=='2'|| str[i]=='3'|| str[i]=='4'|| str[i]=='5'|| str[i]=='6'|| str[i]=='7'|| str[i]=='8'|| str[i]=='9')
     {
      count++;
     }
  }
  cout<<"No of numerical attribute is:"<<count<<endl;
  return 0;
}