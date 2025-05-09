//Writing a program to find the factorial of a number
#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Give the number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<"."<<endl;
    return 0;
}


//factorial function
#include<iostream>
using namespace std;

int factorial(int n)
{
    
    int fact=1;
    for(int i=n;i>0;i--)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int a;
    cout<<"Give the number:"<<endl;
    cin>>a;
    int result = factorial(a);
    cout<<"Factorial of "<<a<<" is "<<result;
    return 0;
}
