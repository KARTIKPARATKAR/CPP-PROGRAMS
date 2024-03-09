//THe palindrome number is a number when we reverse it , it remains same.
//Eg- 12321, 4961694
#include<iostream>
using namespace std;
int main()
{
  string str,str2;
  cout<<"Give the number you want to check: "<<endl;
  getline(cin,str);
  cout<<"The number given by user is: "<<str<<endl;
  int count=0;
  for(int i=0;str[i]!='\0';i++)
  {
  count++;
  }
  cout<<"The string has "<<count<<" numbers"<<endl;
  str2.resize(count);     // Resizing the string2 as same as the string given by  the user
  // for(int j=count,k=0;str[j]!=str[0];j--,k++)
  // {
  //    str2[k]=str[j];
  // }
  int j=count-1,k=0;
  do{
    str2[k]=str[j];
    j--,k++;
  }
  while(j>=0);

  cout<<"The reverse number is : "<<str2<<endl;
  bool same=true;
  for(int l=0;l<count;l++)
  {
    if(str[l]!=str2[l])
    {
      same=false;
      break;
    }
  }
  if(same)
  {
    cout<<"The number is palindrome"<<endl;
  }
  else{
    cout<<"The number is not palindrome number"<<endl;
  }
}