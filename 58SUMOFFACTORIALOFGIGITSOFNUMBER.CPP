//Find the sum of factorial of a digits of a number.
//If number is 3425. Then find sum of factorial of 3,4,2 and 5
#include<iostream>
using namespace std;
int factorial(int n)   //This is a function of factorial of digit
{  
    int fact=1;
    while(n>0)
    {
      fact=fact*n;
      n--;
    }
    return fact;
}
int main()
{
   int number,sum=0;
   cout<<"Give number:"<<endl;
   cin>>number;
   int digit;
   while(number>0)
   {
    digit=number%10;      //This will save the unit place digit in digit.
    sum=sum+factorial(digit); //Calculating ths factorial of unit digit and saving it to sum
    number=number/10;  //Eliminating the unit place number
   }
   
   cout<<"Sum of factorial of digits is:"<<sum<<endl;   //Printing the sum of factorial of digits of a number
   return 0;
}
