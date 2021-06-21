#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "today";
    int i;
    for(i = 0; s[i]!='\0'; i++)
    {
        s[i] = s[i] -32;
    }
    cout<<s;
}
