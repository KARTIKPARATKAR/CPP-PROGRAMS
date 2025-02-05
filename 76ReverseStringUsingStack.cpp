//Reverse a string using Stack 
#include<iostream>
#include<string>
using namespace std;
char arr[50];
int top=-1;

void push(char a)
{
    if(top==49)
    {
        cout<<"Stack is full"<<endl;
        return;
    }
    else
    {
        top++;
        arr[top]=a;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
        return;
    }
    else
    {
        top--;
    }
}
void printstack()
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
        return ;
    }
    else
    {
        cout<<"Stack is:"<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i];
        }
    }
}
int main()
{
    string str;
    cout<<"Give the string:"<<endl;
    getline(cin,str);
    
    for(int i=0;str[i]!='\0';i++)
    {
        char t;
        t=str[i];
        push(t);
    }
    
    cout<<"Reveser of a string is-"<<endl;
    printstack();
    return 0;
}
