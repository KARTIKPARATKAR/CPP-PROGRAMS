//You are given a string which includes different characters and underscores. 
//Write a program to print all the underscores at start and all other characters at the end.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"WHat is size of the string which contains _ and other characters." <<endl;
    cin>>n;
    char arr[n];
    cout<<"We are storing that string in an array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<"The string that you gave is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='_')
        {
            count++;
        }
    }
    cout<<endl<<"Now printing string with all _ at start:"<<endl;
    for(int i=0;i<count;i++)
    {
        cout<<"_";
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!='_')
        {
            cout<<arr[i];
        }
    }
    return 0;
}