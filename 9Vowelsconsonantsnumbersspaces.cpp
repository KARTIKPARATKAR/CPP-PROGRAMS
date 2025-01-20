//Vowels are A,E,I,O,U,a,e,i,o,u. And all other are consonants.
// 0 to 9 are numbers.
//This code will count the no of vowels/consonants/spaces and numbers present in the given sentence.
#include<iostream>
using namespace std;
int main()
{
    char ch[50];  //Defining a character of size 50
    cout<<"Give the sentence to find out no of vowels consonants and numbers: "<<endl;
    cin.getline(ch,50);
    int v,c,s,n;
    v=c=s=n=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || 
           ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
           {
            v++;
           }
           else if(ch[i]==' ')
           {
            s++;
           }
           else if((ch[i]>='b' && ch[i]<='z') || (ch[i]>='B' && ch[i]<='Z'))
                   {
                    c++;
                   }
           else if(ch[i]>='0' && ch[i]<='9')
                   {
                    n++;
                   }
    }
    cout<<"No of vowels "<<v<<endl;
    cout<<"No of consonants "<<c<<endl;
    cout<<"No of spaces "<<s<<endl;
    cout<<"No of numbers "<<n<<endl;
    return 0;
}
