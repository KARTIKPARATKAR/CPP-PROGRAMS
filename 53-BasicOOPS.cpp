#include<iostream>
using namespace std;
class perform
{
  public:
  int a;
  int b;
  int sum()
  {
    return a+b;
  }
  int multiply()
  {
    return a*b;
  }
  void setter(int x,int y)
  {
     a=x;
     b=y;
  }
  void print()
  {
    int summation=sum();
    cout<<"Sum is:"<<summation<<endl;
    int product=multiply();
    cout<<"Product is:"<<product<<endl;

  }
};
int main()
{
  perform sum;
  sum.setter(5,10);
  sum.print();
  return 0;
}