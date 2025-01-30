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


-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Printing a character form user input at start and rest at end
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Give no of characters in an array:"<<endl;
    cin>>n;
    char arr[n];
    cout<<"Give input in an character array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Your chractyer array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    char a;
    cout<<endl<<"Give which character you want to print at start:"<<endl;
    cin>>a;
    cout<<endl<<"Result is:"<<endl;
   for(int i=0;i<n;i++)
   {
       if(arr[i] == a){
           cout<<arr[i]<<" ";
       }
   }
    for(int i=0;i<n;i++)
   {
       if(arr[i] != a){
           cout<<arr[i]<<" ";
       }
   }
    
    return 0;
}
