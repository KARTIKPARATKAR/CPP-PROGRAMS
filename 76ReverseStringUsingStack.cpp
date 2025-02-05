//Reverse a string using Stack 
//Reversing an array using stack has the same code just take input from user in an array insted of string

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
void pop()                    //Here in this code pop functionality of stack is not required,still I have written it for reference.
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
