#include<iostream>
using namespace std;
class hero      //Class is declared 
{
  public:
  string name;    
  string movie;
  int age;
  string place;
  void print();  //This print is not defined inside of the class defenition hero
  void printplace()     //This printplace is defined inside of the class defenition
  {
    cout<<"Hero belongs to the '"<<place<<"' location."<<endl;
  }
};
void hero::print()   //Scope resolution operator is used with class name and function name.[::]
                     //This member function is defined outside of the class defenition
{
  cout<<"The movie '"<<movie<<"' has lead role of '"<<name<<"' and his age is '"<<age<<"'"<<endl;
}
int main()
{
  hero h1;        //Creating an object of class hero
  h1.name="Salman Khan";   //Assigning values to te data members
  h1.movie="Dabbang";
  h1.age=60;
  h1.place="Mumbai";
  h1.print();     //Print member function is called on object h1 of class hero
  h1.printplace();  //Printplace member function is called on object h1 of class hero
  return 0;
}