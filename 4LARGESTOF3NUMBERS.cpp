#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Give the three numbers:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is the largest of given three numbers"<<endl;
        return 0;
    }
    else 
    {
        if(b>c)
        {
            cout<<b<<" is the largest of given three numbers"<<endl;
            return 0;
        }
        else{
            cout<<c<<" is the largest of given three numbers"<<endl;
            return 0;
        }
    }
}
