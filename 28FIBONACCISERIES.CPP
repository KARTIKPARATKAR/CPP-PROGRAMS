//FIbonacci series is a sequence of numbers where each number is the sum of previous two numbers
//Eg of fibonacci series- 1,2,3,5,8,13,21,34....
#include<iostream>
using namespace std;
int main()
{
    int t3,n;
    cout<<"Give no of terms in fibonnaci series:"<<endl;
    cin>>n;
    int t1=0;
    int t2=1;
    for(int i=0;i<n;i++)
    {   
        if(i==0)
        {
            cout<<t1<<",";
            continue;
        }
        if(i==1)
        {
            cout<<t2<<",";
            continue;
        }
        t3=t1+t2;
        t1=t2;
        t2=t3;
        cout<<t3<<",";
    }

}
