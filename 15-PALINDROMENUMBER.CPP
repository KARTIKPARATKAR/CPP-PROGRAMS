//THe palindrome number is a number when we reverse it , it remains same.
//Eg- 12321, 4961694
#include<iostream>
using namespace std;
int main()
{
  string str,str2;
  cout<<"Give the number you want to check: "<<endl;
  getline(cin,str);    //Getting input of the string
  cout<<"The number given by user is: "<<str<<endl;
  int count=0;
  for(int i=0;str[i]!='\0';i++)
  {
  count++;
  }
  cout<<"The string has "<<count<<" numbers"<<endl;
  str2.resize(count);     // Resizing the string2 as same as the string given by  the user
  int j=count-1,k=0;      //Initializing j from one less count because there would be '\0' at the last index of the string.
  do{
    str2[k]=str[j];       //Here storing last digit of str in first digit of str2
    j--,k++;
  }
  while(j>=0);

  cout<<"The reverse number is : "<<str2<<endl;
  bool same=true;             
  for(int l=0;l<count;l++)
  {
    if(str[l]!=str2[l])      //Here checking whether all the numbers of str and str2 are same or not.
    {
      same=false;            //If all the numbers from both the strings are not same then assigning boolean variable as false.
      break;                 //When assigned as false at any stage, we are terminating the loop by break statement.
    }
  }
  if(same)
  {
    cout<<"The number is palindrome"<<endl;
  }
  else{
    cout<<"The number is not palindrome number"<<endl;
  }
  return 0;
}
