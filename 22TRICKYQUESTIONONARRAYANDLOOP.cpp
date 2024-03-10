//We have to predict the output of the following code.
#include<iostream>
using namespace std;
int main()
{
    int arr[50],i;
    for(i=0;i<48;i++);   // Here we are doing nothing inside the loop but still the loop will run for
                        // 49 times and make the value of i=48.
    {                    // This bracket is separate from the above for loop.
        arr[i]=i;        // The value of i is 48 here.
        cout<<arr[i];    // storing value 48 at index 48 and hence the output woud be 48 only.
    }
    return 0;
}