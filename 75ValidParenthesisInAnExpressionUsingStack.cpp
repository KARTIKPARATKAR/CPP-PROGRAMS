//Valid parenthesis in an expression
#include<iostream>
#include<string>     //This is defined to use string str=" " build in in an string
using namespace std;
char stack[100];
int top=-1;
void pop()
{
    if(top==-1)
    {
        cout<<"Stack is empty i.e. stack underflow"<<endl;
        return ;
    }
    else
    {
        top--;
    }
}

void push(char a)
{
    if(top==99)
    {
        cout<<"Stack is full i.e. stack overflow"<<endl;
        return ;
    }
    else
    {
        top++;
        stack[top]=a;
    }
}


int main()
{
    string str;
    cout<<"Enter an expression:"<<endl;
    getline(cin,str);
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='{' || str[i]=='[' || str[i]== '(')
        {
            push(str[i]);
        }
        else 
        {
            if(top == -1)
            {
                cout<<"Not a valid parenthesis"<<endl;
                return 0;
            }
            if((stack[top]=='{' && str[i]=='}') 
            || (stack[top]=='[' && str[i]==']')
            || (stack[top]=='(' && str[i]==')'))
            {
                pop();
            }
            else
            {
                cout<<"Not a valid parenthesis"<<endl;
                return 0;
            }
        }
        
    }
    if(top==-1)
    {
        cout<<"Valid parenthesis"<<endl;
    }
    else
    {
        cout<<"Not a valid parenthesis"<<endl;
    }
    return 0;
}
