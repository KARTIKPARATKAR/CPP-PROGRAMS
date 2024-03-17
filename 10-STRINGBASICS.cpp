#include<iostream>
using namespace std;
int main()
{
   string s1="Hello World";  //Storing sting in variable s1
   cout<<s1<<endl;                 //Printing string

   string s2;
   cout<<"Give the string s2"<<endl;
   getline(cin,s2);          //Using getline function to take input of multiple words.cin will not take input after space.
   cout<<s2<<endl;

//Indexing in string is same as an array.
string s3;
cout<<"Give string 3"<<endl;
getline(cin,s3);
cout<<"The string s3 is: "<<s3<<endl;
cout<<"Data at 0th index is: "<<s3[0]<<endl;
cout<<"Data at 5th index is: "<<s3[5]<<endl;
cout<<"Data at 7th index is: "<<s3[7]<<endl;
//Null character \0 is strored at the last of every string.

string s4;
cout<<"Give s4:"<<endl;
getline(cin,s4);
cout<<"Finding no of characters in string s4:"<<endl;
int count=0;
for(int i=0;i<s4[i]!='\0';i++)
{   
    if(s4[i]!=' ')  //This line will not count the spaces in the string.
    {
       count++;
    }
}
cout<<"No of character in s4 is:"<<count<<endl;

//Combining of two strings
string s5,s6,s7;
cout<<"Give s5:"<<endl;
getline(cin,s5);
cout<<"Give s6"<<endl;
getline(cin,s6);
s7=s5+s6;
cout<<"Combined string s7 is:"<<s7<<endl;

//When we are given a integer and we want to append 1 at the last of the number. We can convert that number into
//string with the help of to_string function and append 1 as shown below.
int a;
cout<<"Give integer:"<<endl;
cin>>a;
string num;
num=to_string(a);
num=num+'1';
cout<<"Num string is: "<<num<<endl;


    return 0;
}
