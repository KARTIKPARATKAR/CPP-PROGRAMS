//stack 
#include<iostream>
using namespace std;
int stack[100];                  // stack is an array of size 100
int top=-1;                      //top is -1 meaning stack is empty

void push()                      //inserting element into stack    
{
    if(top==99)
    {
        cout<<"Stack is full i.e. Stack overflow"<<endl;
        return;
    }
    else
    {
        int a;
        cout<<"Give element to push:"<<endl;
        cin>>a;
        top++;
        stack[top]=a;
    }
}

void pop()                    //Removing element from stack
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

void print()                 //Printing stack elements
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
        return;
    }
    else
    {
        cout<<"Stack is:"<<endl;
        for(int i=0;i<=top;i++)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    push();
    push();
    push();
    push();
    print();
    pop();
    pop();
    print();
    return 0;
}
