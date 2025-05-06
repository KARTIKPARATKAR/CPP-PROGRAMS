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



//Power of a number
#include<iostream>
using namespace std;
int main()
{
    int base,power,result=1;
    cout<<"Give base;"<<endl;
    cin>>base;
    cout<<"Give power:"<<endl;
    cin>>power;
    for(int i=1;i<=power;i++)
    {
        result = result * base;
    }
    
    cout<<result;
    return 0;
}
