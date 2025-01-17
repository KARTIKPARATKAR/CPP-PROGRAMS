//We have to find the triplets in an array whose sum is equal to the given sum
#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1,2,3,4,2,3,1};
  int s = sizeof(arr) / sizeof(arr[0]);  //This will calculate the number of elements in an array.
  int sum = 5, count = 0;
  for (int i = 0; i < s; i++)
  {
    for (int j = i + 1; j < s; j++)
    {
      for (int p =  j + 1; p < s; p++)
      {
        if (arr[i] + arr[j] + arr[p] == sum)
        {
          count++;
          cout << "Pair is " << arr[i] <<" "<< arr[j] <<" " << arr[p]<< endl;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}
