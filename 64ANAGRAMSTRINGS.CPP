//An "anagram" refers to two strings that contain the exact same characters, but in a different order
// Condition1=Both strings should have same no of characters
// Condition2=Both strings should have same characters but arrangement can be different.
// So first sort both the strings and then compare each character of 1st string with each character of 
// second string. If they are same then these strings are "anagrams"
//brag and grab are anagram
#include<iostream>
#include<string>
using namespace std;
string sort( string str)
{
  int k=str.length();
  for(int i=0;i<k;i++)
  {
    for(int j=0;j<k-i-1;j++)
    {
      if(str[j]>str[j+1])
      {
        char temp;
        temp=str[j];
        str[j]=str[j+1];
        str[j+1]=temp;
      }
    }
  }
  return str;
}
int main()
{
 string st1;
 cout<<"Give string 1:"<<endl;
 getline(cin,st1);
 string sstr1=sort(st1);
 cout<<"Sorted string first is:"<<sstr1<<endl;
string st2;
 cout<<"Give string 2:"<<endl;
 getline(cin,st2);
 string sstr2=sort(st2);
 cout<<"Sorted string second is:"<<sstr2<<endl;
  int l1=sstr1.length();
  int l2=sstr2.length();
  if(l1!=l2)
  {
    cout<<"Two strings are not anagrams because lengths are different."<<endl;
    return 0;
  }
    for(int i=0;i<l1;i++)
    {
      if(sstr1[i]!=sstr2[i])
      {
        cout<<"Two strings are not anagrams because character is not matching."<<endl;
        return 0;
      }
    }
  cout<<"Two strings are anagram!"<<endl;
 return 0;
}
