#include <iostream>
using namespace std;
int add(int num1, int num2)
{
    int sum;
    cout << "Give value of num1" << endl;
    cin >> num1;
    cout << "Give value of num2" << endl;
    cin >> num2;
    sum = num1 + num2;
    return sum;
}
int main()
{
    int a, b;
    int c = add(a, b);
    cout << "Sum is :" << c << endl;
    return 0;
}