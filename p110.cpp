#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int cw=0,cc=0,cv=0;
    cout<<"Enter a string "<<endl;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
        {
            cv++;
        }
        else if(s[i]==' ' && s[i-1]!=' ')
        {
            cw++;
        }
        else if((s[i]>=65 and s[i]<=90) || (s[i]>=97 and s[i]<=122))
        {
            cc++;
        }
    }
    cout<<"Vowels: "<<cv<<endl;
    cout<<"Consonants: "<<cc<<endl;
    cout<<"Words: "<<cw+1<<endl;
}
