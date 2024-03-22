//Pointers stores address
#include<iostream>
using namespace std;
int main()
{
  int a=5;
  int *ptr=&a;
  cout<<"Value of a is :"<<a<<" , "<<*(&a)<<" , "<<*ptr<<endl;  //This will print the value of a only.
  cout<<"Address of a is :"<<&a<<" , "<<ptr<<endl;              //This will print the address of a memory of a.
  cout<<"Address os pointer :"<<&ptr<<endl;                     //This will print the address of pointer.
  return 0;
}
