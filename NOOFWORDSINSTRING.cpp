//Writing program to count the no of words in a string
#include<iostream>
using namespace std;
int main()
{
  string str;
  cout<<"Give the string: "<<endl;
  getline(cin,str);
  int count=0;
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]==' ')
    {
      count++;
    }
  }
  cout<<"No of words in a string are "<<count+1<<endl;
  return 0;
}