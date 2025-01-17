#include<iostream>
using namespace std;
class book    //This is declaration of class book
{
  public:
    string name;   //name,id and author are data members
    int id;
    string author;
    void print()   //read is a member function which prints the message.
    {
      cout<<"Reading book "<<name<<" of author '"<<author<<"' and book id "<<id<<endl;
    }
};
int main()
{
  book cpp;                     // cpp is an object of type book is created
  cpp.name="'C++ programming'";  // name is assigned to the object cpp using dot operator
  cpp.author="Vikram Singh";    // author is assigned to the object cpp using dot operator
  cpp.id=26;                   // id is assigned to the object cpp using dot operator
  cpp.print();                  // member function is called on object cpp usinng dot operator which print the information about object cpp.
  book dbms;
  dbms.name="Database System";
  dbms.author="Senthil Vijay Kumar";
  dbms.id=27;
  dbms.print();
  return 0;

}
