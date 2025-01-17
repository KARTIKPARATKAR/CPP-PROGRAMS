//
#include<iostream>
using namespace std;
class addition
{
  public:
  void add(int a,int b,int c)
  { 
    cout<<"Three integer sum is called."<<endl;
    int sum=a+b+c;
    cout<<"THe sum is "<<sum<<endl;
  }
   void add(float a,float b)
  {

    cout<<"Two float sum is called."<<endl;
    float sum=a+b;
    cout<<"THe sum is "<<sum<<endl;
  }

 void add(int a,int b)
  {
    cout<<"Two integer sum is called."<<endl;
    int sum=a+b;
    cout<<"THe sum is "<<sum<<endl;
  }
};
int main()
{
  addition summation;
  summation.add(4,5);
  summation.add(6,7,8);
  summation.add(2.3f,4.5f);
  cout<<"Hence we have attained the polymorphism through the functional overloading."<<endl;
  return 0;
}
