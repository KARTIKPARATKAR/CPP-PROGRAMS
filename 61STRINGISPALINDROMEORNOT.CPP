//Palindrome means that when you traverse through the string from start or from end,u will get same value/string.
#include <iostream>
using namespace std;
int main()
{
  cout << "Give string:" << endl;
  string str;
  getline(cin, str);   //Getline is used to input string from user which contains spaces.Only cin is unable to store the whole string having spaces
  int p=str.length();
  bool flag=true;
  for(int i=0;i<str.length()/2;i++)
  {
    if(str[i]!=str[p-1-i])
    {
    flag=false;
    }
  }
  if(flag)
  {
    cout<<"Palindrome"<<endl;
  }
  else
  {
    cout<<"Not palindrome!"<<endl;
  }
    return 0;
}
