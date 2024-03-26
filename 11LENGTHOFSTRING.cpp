//Write a program to find the length of the string.
//\0 is stored at the end of the string
#include<iostream>
using namespace std;
int main()
{
  string str;
  cout<<"Give the string you want to find the length of:"<<endl;
  getline(cin,str);
  int count=0;
  for(int i=0;str[i]!='\0';i++)
  {
    count++;
  }
  cout<<"The length of the string is:"<<count<<endl;
  return 0;
}
