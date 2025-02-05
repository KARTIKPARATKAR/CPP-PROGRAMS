//Implementation of queue using array
#include<iostream>
using namespace std;
#define SIZE 10
int front=-1,rear=-1;
int que[SIZE];

void enqueue()
{
    if(rear==(SIZE-1))
    {
        cout<<"Queue is full"<<endl;
        return;
    }
    else
    {
        cout<<"Give number to enqueue:"<<endl;
        int a;
        cin>>a;
        rear++;
        que[rear]=a;
        if(front==-1)
        {
            front++;
        }
    }
}
void dequeue()
{
    if(front==-1 || front>rear)
    {
        cout<<"Queue is empty:"<<endl;
    }
    else
    {
        front++;
        cout<<endl<<"number is dequeue successfully."<<endl;
    }
    
    if(front>rear)
    {
        front=rear=-1;
    }
    
    
}
void display()
{
  if(front==-1 || front>rear)
    {
        cout<<"Queue is empty:"<<endl;
    }
  else
  {
      cout<<"Queue is:"<<endl;
      for(int i=front;i<=rear;i++)
      {
          cout<<que[i]<<" ";
      }
  }
}
int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    display();
    dequeue();
    display();
    return 0;
}
