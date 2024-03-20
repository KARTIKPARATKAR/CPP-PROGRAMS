//The same function name print is used to perform different actions based on the type of input provided.
//Here we are achieving polymrphis through the funvtional overloading 
#include<iostream>
using namespace std;
class test
{
  public:
  void print(int i)
  {
    cout<<"This is a integer "<<i<<endl;
  }
  void print(float f)
  {
    cout<<"This is a float "<<f<<endl;
  }
  void print(char ch)
  {
    cout<<"This is a boolean "<<ch<<endl;
  }
};
int main()
{
  test t1;
  t1.print(4);
  t1.print(4.5f);
  t1.print('A');
  cout<<"Therefore we have implemented the funvtional overloading."<<endl;
  return 0;
}