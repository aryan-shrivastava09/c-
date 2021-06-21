#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    string::iterator it;
    int c = 0;
    cout<<"Enter a string"<<endl;
    getline(cin,s);
    for(it= s.begin();it!=s.end();it++)
    {
        c++;
    }
    cout<<"The length of the string is: "<<c;

}
