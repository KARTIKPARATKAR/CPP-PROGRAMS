//Recursion tries to solve bigger problem by finding solutions to smaller subproblems.
//We represent these problems in form of functions and these functions
//calls itself to solve subproblems.
//Write code for factorial
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
      return n*fact(n-1);
    }
}
int main()
{
    int p;
    cout<<"Give number:"<<endl;
    cin>>p;
int factorial=fact(p);
cout<<"The factorial of "<<p<<" is: "<<factorial<<endl;
return 0;
}