// Calculator using OOPS
#include<iostream>
using namespace std;
class execute
{
    private:
    
    double a;
    double b;
    
    public:
    
    void setter(int x,int y)
    {
        a=x;
        b=y;
    }
     double sum()
     {
         return a+b;
     }
     
     double sub()
     {
         return abs(a-b);
     }
     
     double mul()
     {
         return a*b;
     }
     
     double quotient()
     {
         return a/b;
     }
     
     void print()
     {
         double summation=sum();
         cout<<"Sum is:"<<summation<<endl;
         
         double subtraction=sub();
         cout<<"Subtraction is:"<<subtraction<<endl;
         
         double multiplication=mul();
         cout<<"Multiplication is:"<<multiplication<<endl;
         
         double quotientresult=quotient();
         cout<<"Quotient is:"<<quotientresult<<endl;
         
     }
};
int main()
{
    execute e1;
    cout<<"Give two numbers:"<<endl;
    int p,q;
    cin>>p;
    cin>>q;
    e1.setter(p,q);
    e1.print();
    return 0;
    
}
