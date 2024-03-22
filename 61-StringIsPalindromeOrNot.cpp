//Palindrome means that when you traverse through the string from start or from enfd,u will get same value.
#include <iostream>
using namespace std;
int main()
{
  cout << "Give string:" << endl;
  string str;
  getline(cin, str);
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
