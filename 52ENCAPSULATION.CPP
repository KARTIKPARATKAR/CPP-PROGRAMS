//Encapsulation
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
