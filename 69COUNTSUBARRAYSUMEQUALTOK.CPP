// Subarray means continuous part of array
// If u have array as [1,3,5,2,6,-1,-4,-2,4,2].  Then the subarray is [1,3],[5,2,6],[-4,-2,4]. And [1,3,2] [2,6,-1] are not the subarray.
// So for given array, we have to find the no of subarray with the given sum as K.
#include <iostream>
using namespace std;
int main()
{
    int k;
    cout << "Give the sum:" << endl;
    cin >> k;
    int array[] = {1,1,1,-3,3,1,1,1,-3};
    int size = sizeof(array) / sizeof(array[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum = sum + array[j];
            if (sum == k)
            {
                count++;
            }
        }
    }

    cout << "No of subarray with sum " << k << " is"
         << " " << count << endl;
    return 0;
}
