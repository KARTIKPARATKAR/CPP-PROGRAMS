//Power of a number is calculated by multiplying the base with itself for "power" number of times.
//4^3 = 4*4*4*4 = 256
#include<iostream>
using namespace std;
int main()
{
    int base,power,result=1;
    cout<<"Give base and power:"<<endl;
    cin>>base>>power;
    while(power!=0)
    {
      result=result*base;
      power--;
    }
    cout<<"The result is : "<<result<<endl;
    return 0;
}
