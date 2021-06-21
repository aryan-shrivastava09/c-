#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    string s2="";
    cout<<"Enter a string "<<endl;
    getline(cin,s);
    for(int i = s.length()-1; i>=0; i --)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i] = s[i] + 32;
        }
        s2 = s2 + s[i];
    }
    if(s==s2)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}
