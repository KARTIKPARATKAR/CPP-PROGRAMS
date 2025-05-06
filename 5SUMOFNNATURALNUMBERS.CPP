// //The formula for sum of n-natural number is n(n+1)/2
#include<iostream>
using namespace std;
int main()
{
    cout<<"Give the no till when u want the sum:"<<endl;
    int n,sum;
    cin>>n;
    sum=n*(n+1)/2;
    cout<<"The sum is "<<sum<<endl;
    return 0;
}

//This same code can be written as follows
#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    cout<<"Give the number till when you want the sum : "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}



//Sum of first n natural numbers between tn to tp
#include<iostream>
using namespace std;
int main()
{
    int tn,tp;
    cout<<"Give the number tn:"<<endl;
    cin>>tn;
    cout<<"Give the number tp:"<<endl;
    cin>>tp;
    int sum =0;
    
    for(int i=tn;i<=tp;i++)
    {
        sum = sum + i;
        
    }
    
    cout<<"Sum is:"<<sum<<endl;
    return 0;



//Sum of first n natural numbers which are odd numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Give n"<<endl;
    cin>>n;
    int count=0;
    int sum = 0;
    for(int i=1;count<n;i=i+2)
    {
        sum = sum+i;
        count++;
    }
    
    cout<<"Sum is "<<sum<<endl;
    return 0;
}


//Sum of first n natural numbers which are even numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Give n"<<endl;
    cin>>n;
    int count=0;
    int sum = 0;
    for(int i=2;count<n;i=i+2)
    {
        sum = sum+i;
        count++;
    }
    
    cout<<"Sum is "<<sum<<endl;
    return 0;
}


//Sum of squares of first N natural numbers
#include<iostream>
using namespace std;
int main()
{
    int sum;
    int n;
    cout<<"Give n"<<endl;
    cin>>n;
    
    sum = (n*(n+1)*(2*n+1))/6;
    cout<<"Sum is:"<<sum;
    return 0;
}
