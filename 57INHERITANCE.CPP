#include<iostream>
using namespace std;

class person
{
private:
    string name;
    int age;
public:
    void setperson(string personname, int personage)
    {
        name = personname;
        age = personage;
    }
    void printperson()
    {
        cout << "Age is " << age << endl;
        cout << "Name is " << name << endl;
    }
};

class student : public person
{
private:
    int sid;
    int standard;
public:
    void setstudent(int studentid, int studentstandard)
    {    
        sid = studentid;
        standard = studentstandard;
    }
    void printstudent()
    {
        printperson();
        cout << "Student id is " << sid << endl;
        cout << "Student standard is " << standard << endl;
    }
};

int main()
{
    student kartik;
    string name;
    int age, sid, standard;

    cout << "Give name: ";
    cin >> name;
    cout << "Give age: ";
    cin >> age;
    cout << "Give student id: ";
    cin >> sid;
    cout << "Give standard of student: ";
    cin >> standard;

    kartik.setperson(name, age);
    kartik.setstudent(sid, standard);
    kartik.printstudent();

    return 0;
}
