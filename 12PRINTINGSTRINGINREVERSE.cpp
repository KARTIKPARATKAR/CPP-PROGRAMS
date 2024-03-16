//WRITING A PROGRAM TO PRINT THE STRING IN REVERSE
#include<iostream>
using namespace std;
int main()
{
  string str;
  cout<<"Give the string"<<endl;
  getline(cin,str);
  //Count the length of the string given by the user
  int count=0;
  for(int i=0;str[i]!='\0';i++)
  {
    count++;
  }
  cout<<"Length of the string is : "<<count<<endl;

  //Now printing the string in reverse order after knowing the length of the string given by user
  for(int i=count;i>=0;i--)
  {
    cout<<str[i];
  }
  cout<<endl;
  return 0;
}

