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