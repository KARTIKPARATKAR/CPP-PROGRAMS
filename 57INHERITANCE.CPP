//The  ability of a class to derive properties and characteristics from another class is called Inheritance
1st code:
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

----------------------------------------------------------------------------------------------------------------------------------

2nd code:
#include<iostream>
using namespace std;

class person
{
    int age;
    string name;
    public:
    void setperson(string pname,int page)
    {
        age=page;
        name=pname;
    }
    void getperson()
    {
        cout<<"Person name is:"<<name<<endl;
        cout<<"Person age is:"<<age<<endl;
    }
};

class teacher : public person
{
    private:
    int salary;
    string school;
    public:
    void setteacher(int tsalary,string tschool)
    {
        salary=tsalary;
        school=tschool;
    }
    void getteacher()
    {
        getperson();
        cout<<"Salary of teacher is:"<<salary<<endl;
        cout<<"School of teacher is:"<<school<<endl;
    }
    
};
int main()
{
    teacher t1;
    t1.setteacher(2000,"DCV");
    t1.setperson("Karan",35);
    t1.getteacher();
    return 0;
}
