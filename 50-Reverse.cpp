#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,3,5,6,8,9,2,4,5,7};
    //Numbers given from 1 to 9
    //SIze of array is 9+1=10
    int sum=0;
    int s=0;
    sum=(10*(10+1))/2;
    for(int i=0;i<10;i++)
    {
      s+=arr[i];
    }
    int num=sum-s;
    cout<<"Repeating number is:"<<num<<endl;
    return 0;
}