// Stack follows last in first out or first in last out property.
//Eg-Plates stacked one over another is an example of stck
#include<iostream>
using namespace std;
#define MAX 100
void push(int array[MAX],int p,int &top)
{
  if(top>=MAX-1)
  {
    cout<<"Stack is full."<<endl;
    return;
  }
  else
  {
    top++;
    array[top]=p;
  }
}
void pop(int array[MAX],int &top)
{
  if(top<0)
  {
    cout<<"Stack is empty."<<endl;
    return;
  }
  else
  {
    top--;
  }
}
void display(int array[MAX],int top)
{
  if(top<0)
  {
    cout<<"STack is empty."<<endl;
    return;
  }
  cout<<"Stack elements are:"<<endl;
  for(int i=0;i<=top;i++)
  {
    cout<<array[i]<<" ";
  }
  cout<<endl;
}

int main()
{
int array[MAX];
int top=-1;
push(array,1,top); //pushing 1st element
push(array,12,top); //pushing 2st element
push(array,43,top); //pushing 3st element
push(array,56,top); //pushing 4st element

pop(array,top); //poping one element
display(array,top);
return 0;
}
