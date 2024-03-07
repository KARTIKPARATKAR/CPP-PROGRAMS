//Switch case statement is used to write a program of simple calculator
#include<iostream>
using namespace std;
int main()
{
 cout<<"Give operation you want to perform ??"<<endl<<"+ , - , * , % , /"<<endl;
 char p;
 cin>>p;
 cout<<"Give two integer numbers: "<<endl;
 int a,b,c;
 cin>>a;
 cin>>b;
 switch(p)
 {
 case '+':
    c=a+b;
    cout<<"The sum is "<<c<<endl;
    break;
 case '-':
    c=a-b;
    cout<<"The subtraction is "<<c<<endl;
    break;
case '*':
    c=a*b;
    cout<<"The multiplication is "<<c<<endl;
    break;
case '%':
    c=a%b;
    cout<<"The Division is "<<c<<endl;
    break;
case '/':
    c=a/b;
    cout<<"The Quotient is "<<c<<endl;
    break;
 default:
    cout<<"Give proper operations among + , - , * , % , /";
    break;
 }

}