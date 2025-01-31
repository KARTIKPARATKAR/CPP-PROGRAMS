//Encapsulation is one of the fundamental principles of Object-Oriented Programming (OOP). 
//It refers to bundling data (variables) and methods (functions) that operate on that data into a single unit (class) 
//while restricting direct access to some of the class members (by making them private).
#include<iostream>
using namespace std;
class boy
{
  private:                  //Here salary and yearofbirth is private so it is not accessible outside of the class defination
    int salary;
    int yearofbirth;
  public:
  string name;             //Here name and college is public hence it is accessible from outside of the class
  string college;

void setter()                     //Setting the private data using setter methiod
{
    cout<<"Give salary:"<<endl;
    cin>>salary;
    cout<<"Give year of birth:"<<endl;
    cin>>yearofbirth;
}
 void print()                             //Printing the data of the object of an class
 {
  cout<<"Name is : "<<name<<endl;
  cout<<"College is : "<<college<<endl;
 }
void getter()                               //Printing the data of private class
{
  cout<<"Salary is : "<<salary<<endl;
  cout<<"Year of birth is : "<<yearofbirth<<endl;
}
};
int main()
{
  boy k;
  k.name="Kartik";
  k.college="VIT VELLORE";
  k.setter();
  k.getter();
  k.print();
  k.getter();
  return 0;
}
