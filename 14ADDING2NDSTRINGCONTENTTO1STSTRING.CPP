//wRITING A CODE TO ADD THE 2ND STRING CONTEND TO THE 1ST STRING CONTENT
#include<iostream>
#include<string>
using namespace std;
int main()
{
char str1[50],str2[50];
cout<<"Give the first string: "<<endl;
cin.getline(str1,50);
cout<<"Give the second string: "<<endl;
cin.getline(str2,50);
cout<<"First string is "<<str1<<endl;
cout<<"Second string is "<<str2<<endl;
//calculate length of 1st string
int count=0;
for(int i=0;str1[i]!='\0';i++)
{
  count++;
}
cout<<"Length od first string is "<<count<<endl;
for(int i=0;str2[i]!='\0';i++)
{
  str1[count+i]=str2[i];
}
cout<<"After adding 2nd string to the 1st string"<<endl<<"The 1st string is "<<endl<<str1<<endl;
return 0;

}
