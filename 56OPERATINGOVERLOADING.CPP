//Built in data types are- + - * / % etc
//User defined data types are objects are structure and class
//Build in operators work on build in data types and it doesnt work on user defined data types like 
//classess and structures because computer dont know how to add the user defined data types. We need 
//to tell computer as to how to add the user defined data types and it is known as operator overloading.

#include <iostream>
using namespace std;
class test
{
public:
    int i;
    test(int n)
    {
        i = n;
    }
    test operator+(test t2)
    {
        test t3(0);
        t3.i = i + t2.i;
        return t3;
    }
    void display()
    {
        cout << "Sum of two object is: " << i << endl;
    }
};
int main()
{
    test t1(5), t2(3), t3(0);
    t3 = t1 + t2;
    t3.display();
    return 0;
}
