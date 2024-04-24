//String is a datatype in c++
//string str='abcef' is a string.
//String str has 5 characters , which is also the length of the string str.
//Last character of every string is having the character '\0'. So we can iterate through the string till we 
//find '\n' and increment the count from 0 to till we get \0.
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
  count++;
 }
 cout<<"The string "<<str<<" has total of "<<count<<" length."<<endl;
 return 0;
}
